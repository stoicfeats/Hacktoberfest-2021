import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc  = new Scanner(System.in);
        
      
            String s = sc.next();
            printPermutations(s, "");
        

    }

    public static void printPermutations(String str, String asf) {
        
        if(str.length()==0){
            System.out.println(asf);
            return;
        }
        
        for(int i=0;i<str.length();i++){
             char ch = str.charAt(i);
            String prev = str.substring(0,i);
            String after = str.substring(i+1);
            printPermutations(prev+after,asf+ch);
        }
    }

}