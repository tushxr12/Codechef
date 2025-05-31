package main
import "fmt"

func main() {
	var length, width int
	fmt.Scan(&length)
	fmt.Scan(&width)
	var area = length * width
    fmt.Print("Area of the rectangle is: ", area)

}
