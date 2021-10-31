import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
         Scanner sc = new Scanner(System.in);
         String string=  sc.next();
         getEncodings(string,"");
	}

	private static void getEncodings(String str, String ans) {
		// TODO Auto-generated method stub
		if(str.length()==0) {
			System.out.println(ans);
			return;
		}
		
		if(str.charAt(0)=='0') {
			return;
		}
		char ch = str.charAt(0);
		String rem= str.substring(1);
		int val  = ch -'0';
		char code = (char)('a'+val-1);
		getEncodings(rem, ans+code);
		
	   
		if(str.length()>=2) {
			String ch2 = str.substring(0,2);
			String rem2 = str.substring(2);
			int v = Integer.parseInt(ch2);
	           if(v<=26) {
	       		char code2 = (char)('a'+v-1);  
	       		getEncodings(rem2, ans+code2);
	           }
		}
	
		
		
		
	}

}