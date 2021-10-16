import java.util.Scanner;

public class SalesServiceInvoice {
    public static void main(String[] args) {
        java.util.Scanner input = new Scanner(System.in);

        //get input for customer info
        System.out.println("Name of Customer: ");
        String name = input.nextLine();

        System.out.println("Customer's Address: ");
        String address = input.nextLine();

        System.out.println("Mode of Payment (Credit or Check): ");
        String payment = input.nextLine();

        System.out.println("Cost of Service: ");
        double cost = input.nextDouble();

        //calculate service fee, tax, and total cost
        double serviceFee = 1500.00;
        double taxAmount = cost * 0.07;
        double total = cost + taxAmount + serviceFee;

        //output information
        System.out.println();
        System.out.println();
        System.out.println("Customer Name: " + name);
        System.out.println("Customer Address: " + address);
        System.out.println("Mode of Payment: " + payment);
        System.out.println();
        System.out.println("Service Fee: $" + serviceFee);
        System.out.println();
        System.out.println("Cost of Services: $" + cost);
        System.out.println();
        System.out.println("Tax Amount: $" + taxAmount);
        System.out.println();
        System.out.println("Total Payment: $" + total);

    }
}
