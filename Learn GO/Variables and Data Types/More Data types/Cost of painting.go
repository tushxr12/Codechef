package main

import "fmt"

func main() {
	s := 14
	area := s * s
	cost := area * 7
	fmt.Println(area) // area and cost have to be output on separate lines
	fmt.Print(cost)   // output the $ character after cost without any space
	fmt.Print("$")
}
