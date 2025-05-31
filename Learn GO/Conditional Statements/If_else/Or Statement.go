package main
import "fmt"

func main() {
	var z, x, c int
	fmt.Scan(&z)
	fmt.Scan(&x)
	fmt.Scan(&c)
	if c > x || c > z {
		fmt.Println("PASS")
	} else {
		fmt.Println("FAIL")
	}

	fmt.Scan(&z)
	fmt.Scan(&x)
	fmt.Scan(&c)
	if c > x || c > z {
		fmt.Print("PASS")
	} else {
		fmt.Print("FAIL")
	}
}
