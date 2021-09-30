import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    long num = scn.nextInt(); 
    long reversed = 0;

    for(;num != 0; num /= 10) {
      long digit = num % 10;
      reversed = reversed * 10 + digit;
    }
    
    long x = 0;
    while(reversed>0){
        x = reversed%10;
        reversed = reversed/10;
        System.out.println(x);
    }
     }
    }


// Code 2 : ( Accepted )

import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
       Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int num = n;
        int count=0;
        int size=0;
        while(n>0){
            n = n/10;
            count++;
        }
        
        int div = (int)Math.pow(10,count-1);
        
        while(div!=0){
            int q = num/div;
            int r = num%div;
            
            System.out.println(q);
            num = r;
            
            div = div/10;
        }
     }
    }
