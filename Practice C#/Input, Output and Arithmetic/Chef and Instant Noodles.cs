using System;

public class Test
{
	public static void Main()
	{
		// your code goes here
		string[] inp = Console.ReadLine().Split(' ');
		int x = int.Parse(inp[0]);
	    int y = int.Parse(inp[1]);
	    
	    Console.WriteLine(x*y);
	}
}
