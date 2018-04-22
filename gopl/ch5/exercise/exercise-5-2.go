package main

import (
	"fmt"
	"golang.org/x/net/html"
	"os"
)

func nodeNumber(num map[string]int, n *html.Node) {
	if n.Type == html.ElementNode {
		num[n.Data]++
	}
	for c := n.FirstChild; c != nil; c = c.NextSibling {
		nodeNumber(num, c)
	}
}

func main() {
	doc, err := html.Parse(os.Stdin)
	if err != nil {
		fmt.Fprintf(os.Stderr, "findlink1: %v\n", err)
		os.Exit(1)
	}
	num := make(map[string]int)
	nodeNumber(num, doc)
	fmt.Println(num)
}
