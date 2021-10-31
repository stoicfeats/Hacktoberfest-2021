import java.util.Scanner;

public class Main {
  static String codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
  public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    String s = sc.next();
    printKPC(s, "");

  }

  public static void printKPC(String str, String asf) {

    if (str.length() == 0) {
      System.out.println(asf);
      return;
    }

    char ch = str.charAt(0);
    String ros = str.substring(1);

    String codech = codes[ch - '0'];
    for (int i = 0; i < codech.length(); i++) {
      char chc = codech.charAt(i);
      printKPC(ros, asf + chc);
    }

  }
}