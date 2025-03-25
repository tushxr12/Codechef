using System;

class Program
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());

        for (int i = 0; i < t; i++)
        {
            string[] input = Console.ReadLine().Split();

            // Parse the input values into integers
            int a = int.Parse(input[0]);
            int b = int.Parse(input[1]);
            // Write your code here
            Console.WriteLine(a + b);
        }
    }
}
