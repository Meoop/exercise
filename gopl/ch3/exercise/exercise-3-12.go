package main

import (
	"fmt"
	"sort"
	"strings"
)

func main() {
	fmt.Println(areAngram("123123", "321321"))
	fmt.Println(areAngram("124123", "321321"))
	fmt.Println(areAngram("12312", "321321"))
}

func areAngram(s1, s2 string) bool {
	if s1 == s2 || len(s1) != len(s2) {
		return false
	}
	s1 = sortStrings(s1)
	s2 = sortStrings(s2)
	if s1 == s2 {
		return true
	}
	return false
}

func sortStrings(s string) string {
	w := strings.Split(s, "")
	sort.Strings(w)
	return strings.Join(w, "")
}
