using System;

class Program
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split();

        // Parse the input values into integers
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        
        int mul = a*b;
        int add = a + b;
        
        if(mul > add)
            Console.WriteLine(mul - add);
        else
            Console.WriteLine(add - mul);
    }
}
