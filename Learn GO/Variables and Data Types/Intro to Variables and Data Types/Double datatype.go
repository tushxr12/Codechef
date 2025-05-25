package main
import "fmt"

func main() {
	var pi float32 = 3.14;
	var radius float32 =  8.9; // radius has to be declared as a 'float32'
	area := pi * radius * radius
	fmt.Print("The Area of the given Circle is ")
	fmt.Print(area)
}
