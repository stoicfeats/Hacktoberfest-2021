import java.util.*;

public class DaysWeek {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Select a day of the week. Enter the first letter: M or m for Monday, T or t for Tuesday or Thursday, etc. :");
        String day = input.nextLine();
        char charDay = day.charAt(0);

        switch (charDay) {
            case 'M':
            case 'm':
                System.out.println("M is for Monday");
                break;
            case 'T':
            case 't':
                System.out.println("T is for Tuesday or Thursday");   
                break;
            case 'W':
            case 'w': 
                System.out.println("W is for Wednesday"); 
                break;
            case 'F':
            case 'f': 
                System.out.println("F is for Friday"); 
                break;
            case 'S':
            case 's': 
                System.out.println("S or s is for Saturday or Sunday"); 
                break;
            default: 
                System.out.println("There is no day that begins with that letter.");                       
        }
    }
    
}
