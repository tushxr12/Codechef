package main

import "fmt"

func main() {
	mnts := [4]string{"Jan", "Feb", " Dec", "Apr"}
	mnts[ 2 ] = "Mar"
	fmt.Print(mnts[ 2 ])
}
