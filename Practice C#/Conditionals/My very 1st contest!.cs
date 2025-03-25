using System;

class Program
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split();

        // Parse the input values into integers
        int n = int.Parse(input[0]);
        int a = int.Parse(input[1]);
        int b = int.Parse(input[2]);
        
        Console.Write(n - a + " ");
        Console.WriteLine((n - a - b));
    }
}
