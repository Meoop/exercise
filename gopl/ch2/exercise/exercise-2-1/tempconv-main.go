package main

import (
	"fmt"
	"gopl/ch2/exercise/exercise-2-1/tempconv"
)

func main() {
	fmt.Printf("Brrrr! %v\n", tempconv.AbsoluteZeroC) // "Brrrr! -273.15°C"
	fmt.Println(tempconv.CToF(tempconv.BoilingC))     // "212°F"
	fmt.Println(tempconv.CToK(tempconv.BoilingC))
}
