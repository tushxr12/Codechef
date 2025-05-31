package main
import "fmt"

func main() {
	var r, b int
	r = 45
	b = 23
	if r > b {
		fmt.Println("Rob Scored higher marks than Bob.")
	} else if r < b {
		fmt.Println("Bob & Rob both scored the same")
	}

	r = 15
	b = 15
	if r > b {
		fmt.Println("Rob Scored higher marks than Bob.")
	} else if r == b {
		fmt.Println("Bob & Rob both scored the same")
	}
}
