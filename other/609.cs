using System;

class Program {
    static void Main() {
        string[] input = Console.ReadLine().Split(' ');

        ulong n = ulong.Parse(input[0]);
        ulong k = ulong.Parse(input[1]);

        string binary = Convert.ToString((long)n, 2);

        if (k >= (ulong)binary.Length) {
            Console.WriteLine("0");
            Environment.Exit(0);
        }

        char res = binary[binary.Length - (int)k - 1];

        Console.WriteLine(res);
    }
}
