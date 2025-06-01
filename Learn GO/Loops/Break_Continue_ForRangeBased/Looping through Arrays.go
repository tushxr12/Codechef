package main

import "fmt"

func main() {
	x := [6]string{"C", "O", "D", "I", "N", "G"}
	for i := 0; i < 6; i = i + 1 {
		fmt.Println(i, "=", x[i])
	}
}
