#include <iostream>

using namespace std;

int main() {
    //task 01
    int i = 1;
    int n;
    cout << "Enter n: ";
    cin >> n;
    while (i <= n) { //e.g n = 87, code keeps repeating and adding 1 to i till it gets to 87
        cout << i << " ";
        i++;
    }

    //task 02
    int n;
    cout << "Enter n: ";
    cin >> n;
    while (n >= 1) {
        cout << n << " ";
        n--;
    }

    //task 03
    int i;
    cout << "Enter the starting value: ";
    cin >> i;
    int n;
    cout << "Enter the ending value: ";
    cin >> n;

    if (i % 2 != 0) {
        i++;
    }

    while (i <= n) {
        cout << i << " ";
        i += 2;
    }

    cout << endl;

    return 0;
}
