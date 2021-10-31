import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      if(n==0)
        {
            System.out.println(0);
        }else if(n==1 || n ==2){
            System.out.println(1);
        }
      
      int sum = 0;
      int i = 1;
      int j = 0;
      if(n>2)
      {
        System.out.println(0);
        System.out.println(1);
      while(n>2){
        sum = i + j;
        j = i;
        i = sum;
        System.out.println(sum);
        n--;
      }
      }
      
   }
  }
