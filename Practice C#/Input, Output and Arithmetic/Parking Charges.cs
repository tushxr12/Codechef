using System;

public class Test
{
	public static void Main()
	{
		// your code goes here
		string input = Console.ReadLine();
		string[] inputArr = input.Split(' ');
		
		int x = int.Parse(inputArr[0]);
		int y = int.Parse(inputArr[1]);
		int h = int.Parse(inputArr[2]);
		
		Console.WriteLine(x + (h - 1)*y);
	}
}
