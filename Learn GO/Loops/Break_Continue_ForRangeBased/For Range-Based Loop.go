package main

import "fmt"

func main() {
	num := [8]int{10, 20, 30, 40, 50, 60, 70, 80}
// Index is optional and hence declared by _
	for _, i := range num {
		fmt.Println(i)
	}
}
