// Fetch prints the content found at a URL.

package main

import (
	"fmt"
	"io"
	"net/http"
	"os"
	"path"
)

// Fetch downloads the URL and returns the
// name and length of the local file.
func fetch(url string) (filename string, n int64, err error) {
	resp, err := http.Get(url)
	if err != nil {
		return "", 0, err
	}
	defer resp.Body.Close()
	local := path.Base(resp.Request.URL.Path)
	if local == "/" {
		local = "index.html"
	}
	f, err := os.Create(local)
	if err != nil {
		return "", 0, err
	}
	n, err = io.Copy(f, resp.Body)

	defer func() {
		closeErr := f.Close()
		if err == nil {
			err = closeErr
		}
	}()
	return local, n, err
}

func main() {
	for _, url := range os.Args[1:] {
		fmt.Println(fetch(url))
	}

}
