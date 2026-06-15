#include <iostream>
using namespace std;

int main() {
//this is a single-line comment
/*this
is
a
multi-line
comment*/

//user input
	string userName;

	cout << "type in your name: ";
	cin >> userName;
	cout << "welcome " << userName << endl;

//numeric data types
	int myNum = 100;
	float myFloat = 12e3; //'e' to indicate power of 10
	double myDouble = 18e4;

	cout << myFloat << endl;
	cout << myDouble << endl;

//boolean data types
	bool isCodingFun = true;
	bool isCheeseTasty = false;

	cout << isCodingFun << endl; //outputs 1(true)
	cout << isCheeseTasty << endl; //outputs 0(false)

//character data types
	char myChar = 'A';
	char a = 65, b = 66, c = 67; //using ASCII values to display characters

	cout << myChar << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

//string data types
	string myString = "hello world";

	cout << myString << endl;

//arithmetic operators
	int num1 = 25, num2 = 10;
	int sum = num1 + num2;
	int diff = num1 - num2;
	int mul = num1 * num2;
	int div = num1 / num2;
	int mod = num1 % num2;

	return 0;
}