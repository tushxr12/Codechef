package main
import "fmt"

func main() {
	var a, b int
	var sum, diff int

	fmt.Scan(&a)
	fmt.Scan(&b)

    sum = a + b
    diff = a - b

    fmt.Println("Sum is:", sum) 
    fmt.Print("Difference is: ", diff)
}
