using System;
public class Test{
    public static void Main()
    {
        string [] s=Console.ReadLine().Split(' ');
        int a=int.Parse(s[0]);
        int b=int.Parse(s[1]);
      
        if(a + b + (a*b) == 111)
        {
            Console.WriteLine("Yes");
        }
        else
        {
            Console.WriteLine("No");
        }
    }
}
