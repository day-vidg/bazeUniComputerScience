#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    // task 01 - multiplication table
    int TableOf;
    cout << "Enter the table of numbers you want: ";
    cin >> TableOf;
    for (int i = 1; i <= 10; ++i) {
        cout << TableOf << " x " << i << " = " << TableOf * i << "\n";
    }

    cout << "\n"; // separator between tasks

    // task 02 - power calculation
    int pnum;
    cout << "Enter a number: ";
    cin >> pnum;
    int power;
    cout << "Enter the number you want it to be raised to: ";
    cin >> power;

    cout << pnum << "^" << power << " is: ";
    if (power == 0) {
        if (pnum == 0) {
            cout << "undefined" << "\n";
            return 0;
        } else {
            cout << 1 << "\n";
        }
    } else {
        double result = pow(static_cast<double>(pnum), power);
        cout << result << "\n";
    }

    // task 03 - sum of first 'n' natural numbers
    int n;
    cout << "\nEnter 'n' to sum natural numbers up to 'n': ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a NATURAL number." << "\n";
        return 0;
    } else {
        int sum_loop = 0;
        for (int i = 1; i <= n; ++i) {
            sum_loop += i;
        }
        cout << "Sum of natural numbers from 0 to " << n << " is: " << sum_loop << "\n";
    }

    // task 04 - sum of digits of a number
    int num;
    cout << "\nEnter a number that is two digits or higher: ";
    cin >> num;
    int absnum = num < 0 ? -num : num;
    if (absnum < 10) {
        cout << "Invalid number..." << "\n";
        return 0;
    } else {
        string s = to_string(absnum);
        int sum_digits = 0;
        for (char c : s) sum_digits += (c - '0');

        cout << "Since your number was " << num << ", ";
        for (size_t i = 0; i < s.size(); ++i) {
            if (i) cout << " + ";
            cout << (s[i] - '0');
        }
        cout << " is " << sum_digits << "." << "\n";
    }
    return 0;
}