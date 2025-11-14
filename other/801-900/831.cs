using System;

class Program {
    static void Main() {

        string[] input = Console.ReadLine().Split(' ');
        int x = int.Parse(input[0]);
        int y = int.Parse(input[1]);
        int n = int.Parse(input[2]);

        int cnt = 0;

        while (n > 0) {
            if (n >= 3 && y < 3 * x) {
                cnt += y;
                n -= 3;
            } else {
                cnt += x;
                n -= 1;
            }
        }
        Console.WriteLine(cnt);
    }
}

