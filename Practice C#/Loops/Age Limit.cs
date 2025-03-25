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
            int a = int.Parse(input[2]);

            // Your code goes here for each test case
            if(a >= x && a < y)
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
