package main

import (
	"bytes"
	"fmt"
	"strings"
)

func comma(s string) string {
	var buf bytes.Buffer
	sig := s[:1]
	if sig == "+" || sig == "-" {
		buf.WriteString(sig)
		s = s[1:]
	}

	nDotIndex := strings.Index(s, ".")
	hasDot := false
	sBeforeDot := s[:]
	sAfterDot := s[:]
	if nDotIndex >= 0 {
		hasDot = true
		sBeforeDot = s[:nDotIndex]
		sAfterDot = s[nDotIndex+1:]
	} else {
		hasDot = false
	}

	n := len(sBeforeDot) % 3
	for i, v := range sBeforeDot {
		if i%3 == n {
			buf.WriteString(",")
		}
		buf.WriteString(string(v))
	}

	if hasDot {
		buf.WriteString(".")
		for i, v := range sAfterDot {
			if i != 0 && i%3 == 0 {
				buf.WriteString(",")
			}
			buf.WriteString(string(v))
		}
	}
	return buf.String()
}

func main() {
	fmt.Println(comma("12345678"))
	fmt.Println(comma("12345678.12345678"))
	fmt.Println(comma("-12345678.1231232"))

}
