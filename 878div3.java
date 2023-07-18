import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Pot {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();

        while (x > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            List<Integer> lst = new ArrayList<>();
            int cnt = 0;

            for (int i = 0; i < a; i++) {
                int elem = sc.nextInt();
                if (elem <= c) {
                    cnt++;
                    if (i == a - 1) {
                        lst.add(cnt);
                    }
                } else {
                    lst.add(cnt);
                    cnt = 0;
                }
            }

            long result = calculateResult(lst, b);
            System.out.println(result);
            x--;
        }
        sc.close();
    }

    private static long calculateResult(List<Integer> lst, int b) {
        long res = 0;

        for (int num : lst) {
            for (int j = 1; j <= num; j++) {
                int p = j + b - 1;
                if (p <= num) {
                    long ways = num - p + 1;
                    res += ways;
                }
            }
        }

        return res;
    }
}
