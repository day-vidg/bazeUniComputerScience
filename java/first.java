//User input with scanner
import java.util.Scanner;
public class first {
    public static void main(String[]args) {
        Scanner input = new Scanner(System.in);
        System.out.println(" What's your name?: ");
        String fname = input.next();
        String lname = input.next();
        System.out.println("Nice to meet you " + fname + " " + lname + ".");
        System.out.print("Please enter a number: ");
        int number = input.nextInt();
        if (number % 2 == 0) {
            System.out.println("The number is Even.");
        } else {
            System.out.println("The number is Odd.");
        }
    }
}