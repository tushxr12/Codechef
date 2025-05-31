package main
import "fmt"

func main() {
	var a int
	var square int
	var cube int

	fmt.Scan(& a )
	square = a * a
	cube = a*a*a 
	fmt.Println("Square is:", square)
	fmt.Println("Cube is:", cube)
}
