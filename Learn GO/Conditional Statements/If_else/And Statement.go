package main
import "fmt"

func main() {
	a := 15
	b := 35

	if a%7 == 0 && a%5 == 0 {
		fmt.Println("The number is divisible by both 5 & 7")
	} else {
		fmt.Println("The number is not divisible by both 5 & 7")
	}

	if b%7 == 0 &&  b%5 == 0 {
		fmt.Println("The number is divisible by both 5 & 7")
	} else {
		fmt.Println("The number is not divisible by both 5 & 7")
	}
}
