import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a natural number: ");
        int a = sc.nextInt();
        System.out.println("Enter another natural number: ");
        int b = sc.nextInt();
        int c = a + b;
        System.out.println("The sum of the two numbers is: " +c);
    }
}
