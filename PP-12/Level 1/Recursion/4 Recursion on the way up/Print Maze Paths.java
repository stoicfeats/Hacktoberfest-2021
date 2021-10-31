import java.util.Scanner;

public class Main {
	 public static void main(String[] args) throws Exception {
         Scanner sc = new Scanner(System.in);
         int n = sc.nextInt();
         int m = sc.nextInt();
         printMazePaths(0,0,n,m,"");
 }

 // sr - source row
 // sc - source column
 // dr - destination row
 // dc - destination column
 public static void printMazePaths(int sr, int sc, int dr, int dc, String psf) {
     
     if(sc>=dc||sr>=dr){
         return;
     }
     if(sc==dc-1&&sr==dr-1){
         System.out.println(psf);
         return;
     }
     
     printMazePaths(sr,sc+1,dr,dc,psf+"h");
       
     printMazePaths(sr+1,sc,dr,dc,psf+"v");
 }
}