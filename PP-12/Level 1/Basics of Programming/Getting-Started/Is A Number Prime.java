import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) 
  {
      Scanner scn = new Scanner(System.in);
  
 
    int tc = scn.nextInt();
    for(int j = 0;j<tc;j++)
    {
        
        int n = scn.nextInt();
        int fac = 0;
        for(int i=2;i<n;i++)
        {
            if(n%i == 0)
            {
                fac++;
            }
        }
        
        if(fac == 2 || n ==1)
        {
            System.out.println("prime");
        }else 
        {
            System.out.println("not prime");
        }
    }
    
  }
      
  }
    
 
