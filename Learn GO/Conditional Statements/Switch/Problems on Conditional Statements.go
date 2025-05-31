package main

import "fmt"

func main() {
	var x int
	fmt.Scan(&x)
	if x < 70 {
		fmt.Println("Order Confirmed")
	} else {
		fmt.Println("Order Limit Reached")
	}
	fmt.Println("Thank YOU!")

	fmt.Scan(&x)
	if x < 70 {
		fmt.Println("Order Confirmed")
	} else {
		fmt.Println("Order Limit Reached")
	}
	fmt.Print("Thank YOU!")
}
