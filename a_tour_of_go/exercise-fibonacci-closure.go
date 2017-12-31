package main

import "fmt"

// fibonacci 函数会返回一个返回 int 的函数。
func fibonacci() func() int {
	fib1 := 0
	fib2 := 1
	return func() int {
		tmp := fib2
		fib2 = fib1 + fib2
		fib1 = tmp
		return fib1
	}
}

func main() {
	f := fibonacci()
	for i := 0; i < 10; i++ {
		fmt.Println(f())
	}
}
