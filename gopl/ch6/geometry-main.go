package main

import (
	"fmt"
	"gopl/ch6/geometry"
)

func main() {
	perim := geometry.Path{{1, 1}, {5, 1}, {5, 4}, {1, 1}}
	fmt.Println(perim.Distance()) // "12", method of geometry.Path

	r := &geometry.Point{1, 2}
	r.ScaleBy(2)
	fmt.Println(*r)

	q := geometry.Point{2, 3}
	fmt.Println(r.Distance(q))
	q.ScaleBy(2)
	fmt.Println(q)
}
