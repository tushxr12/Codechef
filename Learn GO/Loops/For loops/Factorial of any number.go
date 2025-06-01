package main

import "fmt"

func main() {
	var num int
	var fact = 1

	fmt.Scan(&num)

	for a := 1; a <= num; a++ {
		fact = fact * a
	}

	fmt.Println("The factorial of the given number is:", fact)
}
