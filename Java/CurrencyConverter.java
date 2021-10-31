//Convert currency from Indian National Rupees to American Dollars.
import java.util.Scanner;

public class currency {
    public static void main(String[] args) {
        //To enter a amount in INR and output in dollars
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the amount in INR");
        float amt =in.nextFloat();
        float dollar= amt / 75.13f;
        System.out.println(dollar);

    }
}
