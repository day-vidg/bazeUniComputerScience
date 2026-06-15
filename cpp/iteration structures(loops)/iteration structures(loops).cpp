#include <iostream>

using namespace std;

int main()
{
    //while
    //syntax: while (condition){statement}
    int i = 0;
    while (i < 5) {
        cout << i << endl;
        i++; //for the code to have an end
    }

    //do-while
    //syntax: do {statement} while (condition)
    int n;
    do {
        cout << "Enter number (Tip: Enter 0 to end program): ";
        cin >> n;
        cout << "You entered: " << n << endl;
    } while (n != 0);

    //for
    //syntax: for (initialization; condition; increase) {statement}
    for (int i = 0; i <= 5; i++) {
        cout << i << endl;
    }

    return 0;
}
