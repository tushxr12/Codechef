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
            int x = int.Parse(input[0]);
            int y = int.Parse(input[1]);

            // Your code goes here for each test case
            if(x + y > 6)
            {
                Console.WriteLine("YES");
            }
            else
            {
                Console.WriteLine("NO");
            }

        }
    }
}
