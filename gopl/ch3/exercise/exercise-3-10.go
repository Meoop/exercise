package main

import (
	"bytes"
	"fmt"
)

func comma(value []int) string {
	var buf bytes.Buffer
	n := len(value) % 3
	for i, v := range value {
		if i%3 == n {
			buf.WriteString(",")
		}
		fmt.Fprintf(&buf, "%d", v)
	}
	return buf.String()
}

func main() {
	fmt.Println(comma([]int{1, 2, 2, 2, 2, 2, 3}))
}
