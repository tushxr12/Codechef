package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	for i := 0; i <= 12; i = i + 1 {
		if i == n {
			continue
		}
		fmt.Println(i)
	}
}
