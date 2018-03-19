// Surface computes an SVG rendering of a 3-D surface function.

package main

import (
	"fmt"
	"io"
	"log"
	"math"
	"net/http"
)

const (
	width, height = 600, 320
	cells         = 100
	xyrange       = 30.0
	xyscale       = width / 2 / xyrange
	zscale        = height * 0.4
	angle         = math.Pi / 6
)

var sin30, cos30 = math.Sin(angle), math.Cos(angle)

func main() {
	handle := func(w http.ResponseWriter, r *http.Request) {
		w.Header().Set("Content-Type", "image/svg+xml")
		surface(w)
	}
	http.HandleFunc("/", handle)
	log.Fatal(http.ListenAndServe("localhost:8000", nil))
}

func surface(out io.Writer) {
	out.Write([]byte(fmt.Sprintf("<svg xmlns='http://www.w3.org/2000/svg' "+
		"style='stroke: grey; fill: white; stroke-width: 0.7' "+
		"width='%d' height='%d'>", width, height)))
	for i := 0; i < cells; i++ {
		for j := 0; j < cells; j++ {
			ax, ay, _ := corner(i+1, j)
			bx, by, _ := corner(i, j)
			cx, cy, _ := corner(i, j+1)
			dx, dy, isPeak := corner(i+1, j+1)
			color := "#0000ff"
			if isPeak {
				color = "#ff0000"
			}
			out.Write([]byte(fmt.Sprintf("<polygon style='fill: %s' points='%g,%g %g,%g %g,%g %g,%g'/>\n",
				color, ax, ay, bx, by, cx, cy, dx, dy)))
		}
	}
	out.Write([]byte("</svg>"))
}

func corner(i, j int) (float64, float64, bool) {
	x := xyrange * (float64(i)/cells - 0.5)
	y := xyrange * (float64(j)/cells - 0.5)
	z := f(x, y)
	b := true
	if z < 0 {
		b = false
	}
	sx := width/2 + (x-y)*cos30*xyscale
	sy := height/2 + (x+y)*sin30*xyscale - z*zscale
	return sx, sy, b
}

func f(x, y float64) float64 {
	r := math.Hypot(x, y)
	if r != 0 {
		return math.Sin(r) / r
	}
	return 0
}
