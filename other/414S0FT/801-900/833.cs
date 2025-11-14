using System;

class Program {
    static int n, m;
    static char[,] a;
    static bool[,] used;

    static void Main() {
        string[] input = Console.ReadLine().Split();

        n = int.Parse(input[0]);
        m = int.Parse(input[1]);

        a = new char[n + 1, m + 1];
        used = new bool[n + 1, m + 1];

        for (int i = 1; i <= n; i++) {
            string row = Console.ReadLine();
            for (int j = 1; j <= m; j++) {
                a[i, j] = row[j - 1];
            }
        }

        DFS(1, 1);
    }

    static void DFS(int i, int j) {
        used[i, j] = true;

        if (a[i, j] == 'U' && i > 1 && !used[i - 1, j]) DFS(i - 1, j);
        if (a[i, j] == 'D' && i < n && !used[i + 1, j]) DFS(i + 1, j);
        if (a[i, j] == 'L' && j > 1 && !used[i, j - 1]) DFS(i, j - 1);
        if (a[i, j] == 'R' && j < m && !used[i, j + 1]) DFS(i, j + 1);

        char s = a[i, j];

        if ((s == 'U' && i <= 1) || (s == 'D' && i >= n) || (s == 'L' && j <= 1) || (s == 'R' && j >= m)) {
            Console.WriteLine(i + " " + j);
            Environment.Exit(0);
        }
        else {
            Console.WriteLine(-1);
            Environment.Exit(0);
        }
    }
}
