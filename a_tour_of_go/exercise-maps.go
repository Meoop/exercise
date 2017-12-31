package main

import (
	"golang.org/x/tour/wc"
	"strings"
)

func WordCount(s string) map[string]int {
	word := strings.Fields(s)
	wc := make(map[string]int)
	for _, v := range word {
		_, ok := wc[v]
		if !ok {
			wc[v] = 1
		} else {
			wc[v] = wc[v] + 1
		}
	}
	return wc
}

func main() {
	wc.Test(WordCount)
}
