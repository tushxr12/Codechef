package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)

	if a >= c {
		fmt.Println("Bravo!")
	} else {
		fmt.Println("Try Again")
	}

	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)

	if a >= c {
		fmt.Print("Bravo!")
	} else {
		fmt.Print("Try Again")
	}
}
