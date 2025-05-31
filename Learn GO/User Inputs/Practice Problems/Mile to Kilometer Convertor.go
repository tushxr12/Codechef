package main
import "fmt"

func main() {
	var mile int
	var km int
	fmt.Scan(&mile)
	km = int(1.60 * float64(mile))
	fmt.Print(km)
	fmt.Print(" Kilometers")
}
