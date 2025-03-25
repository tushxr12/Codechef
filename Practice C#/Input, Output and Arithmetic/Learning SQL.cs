using System;

public class Test
{
	public static void Main()
	{
	    string input = Console.ReadLine();
        
        string[] inputArray = input.Split(' ');

        int num1 = int.Parse(inputArray[0]);
        int num2 = int.Parse(inputArray[1]);
        int num3 = int.Parse(inputArray[2]);
        
        Console.WriteLine((num1 + num3) * num2);
	}
}
