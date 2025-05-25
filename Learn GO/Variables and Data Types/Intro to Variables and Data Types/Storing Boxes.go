package main
import "fmt"

func main() {
	var length int = 11
	var width int = 13
	fmt.Println(length * width)
	fmt.Println(2 * (length + width))
	width = 15 // Replace the underscore (_) with the updated value of width.
	fmt.Println(length * width)
	fmt.Println(2 * (length + width))
}
