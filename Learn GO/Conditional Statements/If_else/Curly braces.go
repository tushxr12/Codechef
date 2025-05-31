package main

import "fmt"

func main() {
	Age := 25
	Vage := 18

	if Age < Vage {	
		fmt.Println("Not old enough to vote.")
		fmt.Println("Wait for", (Vage - Age), "years")
	}
	 else {
		fmt.Println("Old enough to vote!")
	 }
}
