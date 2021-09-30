import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        pattern(n);
    }

    public static void pattern(int n) {
        int nst = 1;
        int nsp = 2 * n - 3;
        for (int i = 1; i <= n; i++) {
            int val = 1;
            for (int j = 1; j <= nst; j++) {
                System.out.print(val + "\t");
                val++;
            }
            for (int j = 1; j <= nsp; j++) {
                System.out.print("\t");
            }
            if (i < n) {
                int xval = i;
                for (int j = 1; j <= nst; j++) {
                    System.out.print(xval + "\t");
                    xval--;
                }
            } else {
                int xval = i - 1;
                for (int j = 1; j < nst; j++) {
                    System.out.print(xval + "\t");
                    xval--;
                }
            }
            nsp -= 2;
            nst++;
            System.out.println();
        }
    }
}