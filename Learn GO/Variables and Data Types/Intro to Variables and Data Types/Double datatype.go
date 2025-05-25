package main
import "fmt"

func main() {
	pi float32 := 3.14
	var radius float32 =  3.14 // radius has to be declared as a 'float32'
	area := pi * radius * radius
	fmt.Print("The Area of the given Circle is ")
	fmt.Print(area)
}
