#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //task 01

    //scenario 01
    char letter1;
    letter1 = 'A';
    cout << letter1 << '\n';
    letter1 = 'B';
    cout << letter1 << '\n';
    cin >> letter1;

    //scenario 02
    char letter2;
    letter2 = 65;
    cout << letter2 << '\n';
    letter2 = 66;
    cout << letter2 << '\n';
    cin >> letter2;

    //scenario 03
    int letter3;
    letter3 = 'A';
    cout << letter3 << '\n';
    letter1 = 'B';
    cout << letter1 << '\n';
    cin >> letter1;
    cout << "\n\n";


    //task 02
    int num1, num2;
    string operation;
    cout << "Enter any two numbers of your choice." << endl;
    cout << "The first number goes here: ";
    cin >> num1;
    cout << "The second one goes here: ";
    cin >> num2;
    cout << "What would you like me to do; 'add', 'subtract', 'divide' or 'multiply' them: ";
    cin >> operation;
    if (operation == "add") {
        cout << "The sum of the numbers is: " << num1 + num2 << endl;
    }
    else {
        if (operation == "subtract") {
            cout << "The difference between the numbers is: " << num1 - num2 << endl;
        }
        else {
            if (operation == "divide") {
                cout << "The quotient of the numbers is: " << (double)num1 / num2 << endl;
            }
            else {
                if (operation == "multiply") {
                    cout << "The multiplication of the numbers is: " << num1 * num2 << endl;
                }
                else {
                    cout << "Operators must be inputed at this point..and not whatever you put" << endl;
                }
            }
        }
    }
    cout << "\n\n";

    //task 03
    int val1;
    int val2;
    int val3;
    cout << "Please enter your three numbers: "; //space has to be between the numbers for code to work
    cin >> val1 >> val2 >> val3;
    cout << val1 << "\n" << val2 << "\n" << val3 << "\n";
    cout << val3 << "\n" << val2 << "\n" << val1 << "\n";
    system("PAUSE");
    cout << "\n\n";

    //task 04
    double x1, x2, y1, y2;
    cout << "Enter your x1 value: ";
    cin >> x1;
    cout << "Enter your x2 value: ";
    cin >> x2;
    cout << "Enter your y1 value: ";
    cin >> y1;
    cout << "Enter your y2 value: ";
    cin >> y2;
    double d = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    cout << "The distance between the two points you gave, with the coordinates: (" << x1 << "," << y1 << ") " "and (" << x2 << "," << y2 << ") " "is " << d << "\n\n";

    //task 05
    const double PI = 3.141592653589793;

    // Circle
    double radius = 5.0;
    double areaCircle = PI * radius * radius;
    cout << "The area of a circle with radius 5.0 is: " << areaCircle << endl;

    // Rectangle
    double length = 10.0;
    double width = 4.0;
    double areaRectangle = length * width;
    cout << "The area of a rectangle with length 10.0 and width 4.0 is: " << areaRectangle << endl;

    // Triangle
    double base = 6.0;
    double height = 3.0;
    double areaTriangle = 0.5 * base * height;
    cout << "The area of atriangle with base 6.0 and height 3.0 is: " << areaTriangle << "\n\n";

    //task 06
    double item1 = 12.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 14.95;
    double item5 = 3.95;
    cout << "The prices of the items are:" << endl;
    cout << "Item 1 costs N" << item1 << endl;
    cout << "Item 2 costs N" << item2 << endl;
    cout << "Item 3 costs N" << item3 << endl;
    cout << "Item 4 costs N" << item4 << endl;
    cout << "Item 5 costs N" << item5 << endl;
    double totalCost = item1 + item2 + item3 + item4 + item5;
    cout << "The total cost of the items is: " << totalCost << endl;
    double tax = 0.06;
    cout << "Tax is 6%" << endl;
    cout << "The new price of each item after tax is:" << endl;
    cout << "Item 1 now costs N" << item1 * (1 + tax) << " after tax" << endl;
    cout << "Item 2 now costs N" << item2 * (1 + tax) << " after tax" << endl;
    cout << "Item 3 now costs N" << item3 * (1 + tax) << " after tax" << endl;
    cout << "Item 4 now costs N" << item4 * (1 + tax) << " after tax" << endl;
    cout << "Item 5 now costs N" << item5 * (1 + tax) << " after tax" << endl;
    double totalCostTaxed = (item1 + item2 + item3 + item4 + item5) * (1 + tax);
    cout << "The total cost with tax included is " << totalCostTaxed << endl;
    return 0;
}
