import java.util.Scanner;
public class Assessment3CgpaCalc {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.print("How many courses are you taking?: ");
        int noOfCourses = input.nextInt();
        int totalCreditRegistered = 0;
        int totalWeightedCreditEarned = 0; // Credit x Grade point

        for (int i = 1; i <= noOfCourses ; i++) {
            System.out.println("Course " + i + ":");
            System.out.print("How many credit units is this course?: ");
            int courseCreditUnit = input.nextInt();

            String gradeInput;
            while (true) {
                System.out.print("What grade did you get in this course?: ");
                gradeInput = input.next().toUpperCase();
                if (gradeInput.length() == 1 && "ABCDEF".contains(gradeInput)) {
                    break;
                }
                else {
                    System.out.println("Invalid grade entered. Enter a single grade from A to F.");
                }
            }
            char grade = gradeInput.charAt(0);
            int gradePoint = 0;

            switch (grade) {
                case 'A':
                    gradePoint += 5;
                    break;
                case 'B':
                    gradePoint += 4;
                    break;
                case 'C':
                    gradePoint += 3;
                    break;
                case 'D':
                    gradePoint += 2;
                    break;
                case 'E':
                    gradePoint += 1;
                    break;
                case 'F':
                    gradePoint += 0;
                    break;
                default:
                    System.out.println("Invalid grade entered");
                    return;
            }

            int weightedCreditEarned = courseCreditUnit * gradePoint;
            totalWeightedCreditEarned += weightedCreditEarned;
            totalCreditRegistered += courseCreditUnit;
        }

        if (totalCreditRegistered == 0) {
            System.out.println("Total credit registered must be greater than zero.");
        } else {
            double cgpa = (double) totalWeightedCreditEarned / totalCreditRegistered;
            System.out.println("Total weighted credit earned: " + totalWeightedCreditEarned);
            System.out.println("Total credit registered: " + totalCreditRegistered);
            System.out.print("Your CGPA is: " + cgpa);
        }
    }
}
