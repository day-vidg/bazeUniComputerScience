public class Assessment1DataTypes {
    public static void main(String[] args){
        //Part A
        String customerName = "David";
        byte noOfPlatesOrdered = 3;
        double pricePerPlate = 1500.50d;
        boolean isCustomerStudent = true;
        char firstLetterOfCustomerName = 'D';
        String customerPhoneNo = "+2349027540505";

        double totalCost = noOfPlatesOrdered * pricePerPlate;
        int roundedTotalCost = (int) totalCost; //Explicit cast from 'double' to 'int'

        System.out.println("                    RECEIPT");
        System.out.println("--------------------------------------------------");
        System.out.println("                                    Qty");
        System.out.println(" Plate of food           " + pricePerPlate + " x    3    " + (noOfPlatesOrdered * pricePerPlate));
        System.out.println("--------------------------------------------------");
        System.out.println(" TOTAL                                       " + roundedTotalCost);

        //Part B
        /*
         1.) 1500.50 cant be stored as an 'int' because the 'int' data type can store only whole numbers( e.g. 1500)
         2.) 'int' stores whole numbers only, 'double' stores decimal numbers of up to 15 digits after decimal
             'char' stores single letters, 'String' stores multiple letters-called words
         3.) Implicit casting(or widening casting) is converting a smaller data type to a larger one, Explicit casting(or narrowing casting) is converting a larger data type into a smaller one. (e.g. from code: line 12)
         */
    }
}