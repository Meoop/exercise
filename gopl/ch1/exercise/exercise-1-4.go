// Dup2 prints the count and text of lines that appear more than once
// in the input. It reads form stdio or from a list of named files.

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	counts := make(map[string]int)
	countFiles := make(map[string][]string)
	files := os.Args[1:]
	if len(files) == 0 {
		countLines(os.Stdin, counts, countFiles)
	} else {
		for _, file := range files {
			f, err := os.Open(file)
			if err != nil {
				fmt.Fprintf(os.Stderr, "dup2: %v\n", err)
				continue
			}
			countLines(f, counts, countFiles)
			f.Close()
		}
	}
	for line, n := range counts {
		if n > 1 {
			fmt.Printf("%d\t%s\t%v\n", n, line, countFiles[line])
		}
	}

}

func countLines(f *os.File, counts map[string]int, countFiles map[string][]string) {
	input := bufio.NewScanner(f)
	name := f.Name()
	for input.Scan() {
		text := input.Text()
		counts[text]++
		if !arrayContains(countFiles[text], name) {
			countFiles[text] = append(countFiles[text], name)
		}
	}
	// NOTE: ignoring potential errors from input.Err()
}

func arrayContains(array []string, name string) bool {
	for _, item := range array {
		if item == name {
			return true
		}
	}
	return false
}
