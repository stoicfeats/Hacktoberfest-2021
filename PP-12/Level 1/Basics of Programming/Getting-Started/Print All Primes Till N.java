import java.util.*;

public class Main{
    public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      
      int low = scn.nextInt();
      int hi = scn.nextInt();
      
      for(int div = low;div<=hi;div++){
            
            
        int flag = 1;
        
        for(int j=2;j*j<=div;++j){
            if(div%j==0){
                flag=0;
                break;
            }
        }
        
        if(flag == 1){
            System.out.println(div);
        }
          
      }
    }
}
