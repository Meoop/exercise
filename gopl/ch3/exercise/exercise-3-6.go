// Mandelbrot emits a PNG image of the Mandelbrot fractal.

package main

import (
	"image"
	"image/color"
	"image/png"
	"math/cmplx"
	"os"
)

func main() {
	const (
		xmin, ymin, xmax, ymax = -2, -2, +2, +2
	)

	width, heigth := 1024, 1024
	img := image.NewRGBA(image.Rect(0, 0, width, heigth))
	width = width * 2
	heigth = heigth * 2
	for py := 0; py < heigth; py++ {
		y1 := float64(py)/float64(heigth)*(ymax-ymin) + ymin
		y2 := float64(py+1)/float64(heigth)*(ymax-ymin) + ymin
		for px := 0; px < width; px++ {
			x1 := float64(px)/float64(width)*(xmax-xmin) + xmin
			x2 := float64(px+1)/float64(width)*(xmax-xmin) + xmin
			z11 := complex(x1, y1)
			z12 := complex(x1, y2)
			z21 := complex(x2, y1)
			z22 := complex(x2, y2)
			img.Set(px/2, py/2, color.Gray{(mandelbrot(z11).Y + mandelbrot(z12).Y + mandelbrot(z21).Y + mandelbrot(z22).Y) / 4})
		}
	}
	png.Encode(os.Stdout, img)

}

func mandelbrot(z complex128) color.Gray {
	const iterations = 200
	const contrast = 15

	var v complex128
	for n := uint8(0); n < iterations; n++ {
		v = v*v + z
		if cmplx.Abs(v) > 2 {
			return color.Gray{255 - contrast*n}
		}
	}
	return color.Gray{0}
}
