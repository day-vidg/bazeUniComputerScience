#include <iostream>

using namespace std;

int main()
{
    //task 01
    int num1;
    cout << "Enter a number: ";
    cin >> num1;
    if (num1 > 0) {
        cout << "Your number is positive" << endl;
    }
    else {
        cout << "Your number is negative" << endl;
    }

    //task 02
    int num2;
    cout << "Enter a number..I need to check if its positive, negative, or zero: ";
    cin >> num2;
    if (num2 > 0) {
        cout << "Your number is positive" << endl;
    }
    else {
        if (num2 < 0) {
            cout << "Your number is negative" << endl;
        }
        else {
            cout << "Your number is zero" << endl;
        }
    }

    //task 03
    int mark;
    char score;
    cout << "Enter the mark you attained: ";
    cin >> mark;
    if (mark >= 75) {
        score = 'A';
    }
    else {
        if (mark < 75 && mark >= 60) {
            score = 'B';
        }
        else {
            if (mark < 60 && mark >= 45) {
                score = 'C';
            }
            else {
                if (mark >= 30 && mark < 45) {
                    score = 'D';
                }
                else {
                    score = 'F';
                }
            }
        }
    }
    cout << "Your grade is: " << score << endl;

    //task 04
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c) {
            cout << "Largest number is: " << a << endl;
        }
        else {
            cout << "Largest number is: " << c << endl;
        }
    }
    else {
        if (b >= c) {
            cout << "Largest number is: " << b << endl;
        }
        else {
            cout << "Largest number is: " << c << endl;
        }
    }

    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            count++;
        }
        cout << "The number is positive and has " << count << " digits." << endl;
    }
    else {
        cout << "The number is not positive." << endl;
    }


    return 0;
}
