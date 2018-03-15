// Server1 is a minimal "echo" server.

package main

import (
	"fmt"
	"log"
	"net/http"
)

func main() {
	http.HandleFunc("/", handle) // each request handle
	log.Fatal(http.ListenAndServe("localhost:8080", nil))
}

func handle(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "URL.Path = %q\n", r.URL.Path)
}
