using System;
public class Test{
    public static void Main()
    {
        string [] s=Console.ReadLine().Split(' ');
        int x=int.Parse(s[0]);
        int y=int.Parse(s[1]);
        
        if(y > x)
        {
            Console.WriteLine("YES");
        }
        else
        {
            Console.WriteLine("NO");
        }
    }
}
