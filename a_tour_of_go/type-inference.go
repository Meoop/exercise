package main

import "fmt"

func main() {
	v := 42
	fmt.Printf("v is of type %T\n", v)
	f := 42.123
	fmt.Printf("f is of type %T\n", f)
	g := 0.876 + 0.5i
	fmt.Printf("g is of type %T\n", g)
}
