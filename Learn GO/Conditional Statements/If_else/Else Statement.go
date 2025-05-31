package main
import "fmt"

func main() {
	r := 24
	k := 32
	if r > k {
		fmt.Println("Ram is heavier than Karan.")
	} else if r < k {
		fmt.Println("Karan is heavier than Ram")
	} else {
		fmt.Println("Ram & Karan have the same weight!")
	}

	r = 78
	k = 78
	if r > k {
		fmt.Println("Ram is heavier than Karan.")
	} else if r < k {
		fmt.Println("Karan is heavier than Ram")
	} else {
		fmt.Println("Ram & Karan have the same weight!")
	}
}
