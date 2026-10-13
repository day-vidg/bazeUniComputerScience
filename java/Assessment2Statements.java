public class Assessment2Statements {
    public static void main(String[] args){
        //Part A
        double tripDistance = 10.5;
        byte hourOfDay = 17; //5PM
        byte dayOfWeek = 3; //Wed
        int fare;

        //fares
        if (tripDistance <= 5){
            fare = 1000;
        } else if (tripDistance <= 15) {
            fare = 2500;
        }
        else{
            fare = 4000;
        }

        //rush hour
        if ((hourOfDay >= 7 && hourOfDay <=9) || (hourOfDay >= 16 && hourOfDay <= 19)){ //using 7 to 9 as the e.g. the && paired with the >= and <= forces the statement only to work if the 'hourOfDay' falls in that range, the || comes in to give an option of either meething the requirements for 7 to 9 or for 16 to 19
            fare += 500; //surcharge of 500 to original fare
        }

        //promo message
        switch (dayOfWeek){
            default:
                System.out.println("Regular fares apply today!");
                break;
            case 1:
                System.out.println("Monday promo: Free 1km!");
                break;
            case 3:
                System.out.println("Wednesday promo:Get up to 10% off your first order!");
                break;
            case 5:
                System.out.println("Friday promo: Free delivery on your first order!");
                break;
        }

        int km;
        for (km = 1 ; km <= 5 ; km++){
            System.out.println(km + "km trip fare: 1000");
        }

        //Part B
        /*
        1.) switch allows me to get to the specific instance I want without having to go through other previous instances-which is the case in the if/else statements
        2.) &&(and) outputs true only if both inputs are true, otherwise it outputs false. ||(or) outputs true if at least one input is true, otherwise it outputs false. (e.g from code: line 20)
        3.) for loops run through a particular statement based on the limit set, while loops run through the statement until another statement is triggered. for loops should be used when you know where you're starting from and where you're stopping, while loops should be used when you have a statement that has the ability to make affect the value of another statement
         */
    }
}
