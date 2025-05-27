package main
import "fmt"

func main() {
	word := "Ocygen"
	wordBytes := [] rune(word)
	wordBytes[1] = 'x'
	word = string(wordBytes)
	fmt.Println(word)
}
