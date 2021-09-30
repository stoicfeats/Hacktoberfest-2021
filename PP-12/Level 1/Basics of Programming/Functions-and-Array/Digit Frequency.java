import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int d = scn.nextInt();
        int f = getDigitFrequency(n, d);
        System.out.println(f);
    }

    public static int getDigitFrequency(int n, int d) {
        int count=0;
        int r;
        while(n!=0){
            
            r = n%10;
            if(r==d){
                count++;
            }
            n = n/10;
        }
        return count;
    }
}