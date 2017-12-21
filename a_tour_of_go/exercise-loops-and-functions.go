package main

import (
	"fmt"
	"math"
)

func Sqrt(x float64) float64 {
	z := float64(1)
	for {
		tmp := z - (z*z-x)/(2*z)
		if tmp == z || math.Abs(tmp-z) < 0.0000000001 {
			break
		}
		z = tmp
	}
	return z
}

func main() {
	fmt.Println(Sqrt(2))
	fmt.Println(math.Sqrt(2))
}
