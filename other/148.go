package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	s := make(map[int]bool)

	for i := 0; i < n; i++ {
		var x int
		fmt.Scan(&x)
		s[x] = true
	}

	fmt.Println(len(s))
}
