#include <iostream>

using namespace std;

int main()
{
    //task 01
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18) {
        cout << "You must be at least 18 years to proceed.." << endl;
        return 0;
    }
    else {
        cout << "Age verified. You can proceed.." << endl;
    }

    double pay;
    cout << "Enter the amount you wish to pay: ";
    cin >> pay;
    if (pay < 20) {
        cout << "The amount you wish to pay is not enough.." << endl;
    }
    else {
        cout << "Payment successful" << endl;
    }

    char section;
    cout << "Enter your section letter: ";
    cin >> section;
    cout << "Your payment has been successfully forwarded to section " << section << endl;


    //task 02
    int exp1 = 28 / 4 - 2;
    int uans1;
    cout << "Solve 28 / 4 - 2" << endl;
    cin >> uans1;
    if (uans1 == exp1) {
        cout << "Correct! Well done.." << endl;
    }
    else {
        cout << "Incorrect. Try again.." << endl;
        cin >> uans1;

        if (uans1 == exp1) {
            cout << "Yes! You finally got it right.." << endl;
        }
        else {
            cout << "Incorrect again..The answer is: " << exp1 << endl;
        }
    }

    int exp2 = 6 + 12 * 2 - 8;
    int uans2;
    cout << "Solve 6 + 12 * 2 - 8" << endl;
    cin >> uans2;
    if (uans2 == exp2) {
        cout << "Correct! Well done.." << endl;
    }
    else {
        cout << "Incorrect. Try again.." << endl;
        cin >> uans2;

        if (uans2 == exp2) {
            cout << "Yes! You finally got it right.." << endl;
        }
        else {
            cout << "Incorrect again..The answer is: " << exp2 << endl;
        }
    }

    int exp3 = 4 + 8 * 2;
    int uans3;
    cout << "Solve 4 + 8 * 2" << endl;
    cin >> uans3;
    if (uans3 == exp3) {
        cout << "Correct! Well done.." << endl;
    }
    else {
        cout << "Incorrect. Try again.." << endl;
        cin >> uans3;

        if (uans3 == exp3) {
            cout << "Yes! You finally got it right.." << endl;
        }
        else {
            cout << "Incorrect again the answer is: " << exp3 << endl;
        }
    }

    int exp4 = 6 + 17 % 3 - 2;
    int uans4;
    cout << "6 + 17 % 3 - 2" << endl;
    cin >> uans4;
    if (uans4 == exp4) {
        cout << "Correct! Well done.." << endl;
    }
    else {
        cout << "Incorrect. Try again.." << endl;
        cin >> uans4;

        if (uans4 == exp4) {
            cout << "Yes! You finally got it right.." << endl;
        }
        else {
            cout << "Incorrect again the answer is: " << exp4 << endl;
        }
    }

    int exp5 = 2 + 22 * (9 - 7);
    int uans5;
    cout << "Solve 2 + 22 * (9 - 7)" << endl;
    cin >> uans5;
    if (uans5 == exp5) {
        cout << "Correct! Well done.." << endl;
    }
    else {
        cout << "Incorrect. Try again.." << endl;
        cin >> uans5;

        if (uans5 == exp5) {
            cout << "Yes! You finally got it right.." << endl;
        }
        else {
            cout << "Incorrect again the answer is: " << exp5 << endl;
        }
    }

    int exp6 = (8 + 7) * 2;
    int uans6;
    cout << "Solve (8 + 7) * 2" << endl;
    cin >> uans6;
    if (uans6 == exp6) {
        cout << "Correct! Well done.." << endl;
    }
    else {
        cout << "Incorrect. Try again.." << endl;
        cin >> uans6;

        if (uans6 == exp6) {
            cout << "Yes! You finally got it right.." << endl;
        }
        else {
            cout << "Incorrect again the answer is: " << exp6 << endl;
        }
    }

    int exp7 = (16 + 7) % 2 - 1;
    int uans7;
    cout << "Solve (16 + 7) % 2 - 1" << endl;
    cin >> uans7;
    if (uans7 == exp7) {
        cout << "Correct! Well done.." << endl;
    }
    else {
        cout << "Incorrect. Try again.." << endl;
        cin >> uans7;

        if (uans7 == exp7) {
            cout << "Yes! You finally got it right.." << endl;
        }
        else {
            cout << "Incorrect again the answer is: " << exp7 << endl;
        }
    }

    int exp8 = 12 / (10 - 6);
    int uans8;
    cout << "Solve 12 / (10 - 6)" << endl;
    cin >> uans8;
    if (uans8 == exp8) {
        cout << "Correct! Well done.." << endl;
    }
    else {
        cout << "Incorrect. Try again.." << endl;
        cin >> uans8;

        if (uans8 == exp8) {
            cout << "Yes! You finally got it right.." << endl;
        }
        else {
            cout << "Incorrect again the answer is: " << exp8 << endl;
        }
    }

    int exp9 = (19 - 3) * (2 + 2) / 4;
    int uans9;
    cout << "Solve (19 - 3) * (2 + 2) / 4" << endl;
    cin >> uans9;
    if (uans9 == exp9) {
        cout << "Correct! Well done.." << endl;
    }
    else {
        cout << "Incorrect. Try again.." << endl;
        cin >> uans9;

        if (uans9 == exp9) {
            cout << "Yes! You finally got it right.." << endl;
        }
        else {
            cout << "Incorrect again the answer is: " << exp9 << endl;
        }
    }


    //task 03
    int units = 12;
    float mass = 14.5768594033823;
    double weight = mass * units;
    cout << weight << endl;
    cout << "The explanation for this is that, since mass is a float and units is an integer, the result of that would be a float." << endl;
    cout << "But since the 'weight' variable has the datatype 'double' the output would be in a double format.." << endl;
    cout << "So as a result, the answer to the question is C";

    //task 04
    int a, b = 2;//a is 2
    float c = 4.2;
    a = b * c;//a is now 8.4
    cout << "'a' was 2 initially, but is now " << a << endl;

    //task 05
    int qty = 10;
    int salesReps = 3;
    double unitsEach;
    unitsEach = (double)qty / salesReps;  // Floating-point division
    cout << unitsEach << endl;

    //task 06
    cout << "Perform the following operation:" << endl;
    cout << " 845" << endl;
    cout << "+345" << endl;
    cout << "------" << endl;
    system("PAUSE");
    cout << 845 + 345 << endl;

    return 0;
}
