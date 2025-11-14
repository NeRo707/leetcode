using System;

class Program {
    static void Main() {
        int n = int.Parse(Console.ReadLine());
        int[] a = new int[n];
        string[] input = Console.ReadLine().Split();
        for (int z = 0; z < n; z++) {
            a[z] = int.Parse(input[z]);
        }

        int m = int.Parse(Console.ReadLine());
        int[] b = new int[m];
        input = Console.ReadLine().Split();
        for (int j = 0; j < m; j++) {
            b[j] = int.Parse(input[j]);
        }

        Array.Sort(a);
        Array.Sort(b);

        int mn = int.MaxValue;
        int mx = int.MinValue;

        int i = 0, k = 0;

        while (i < n && k < m) {
            mn = Math.Min(mn, Math.Abs(a[i] - b[k]));
            if (a[i] < b[k]) { i++; } else { k++; }
        }

        mx = Math.Max(Math.Abs(a[n - 1] - b[0]), Math.Abs(a[0] - b[m - 1]));

        Console.WriteLine(mn);
        Console.WriteLine(mx);
    }
}
