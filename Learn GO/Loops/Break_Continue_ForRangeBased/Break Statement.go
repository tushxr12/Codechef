package main

import "fmt"

func main() {
	for i := 0; i <= 15; i = i + 1 {
		if i == 13 {
			break
		}
		fmt.Println(i)
	}
}
