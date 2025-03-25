using System;

class Program
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());

        for (int i = 0; i < t; i++)
        {
            int x = int.Parse(Console.ReadLine());

            // Your code goes here for each test case
            Console.WriteLine(x*15);
        }
    }
}
