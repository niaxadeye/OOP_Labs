using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2
{
    
    class Program
    {
        const int num1 = 10;
        static void Main(string[] args)
        {
            Console.WriteLine(num1);
            Console.WriteLine(num1+num1);
            int temp = num1 + num1;
            Console.WriteLine(--temp);
            Console.ReadKey();
        }
    }
}
