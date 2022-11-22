// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <cmath>

using namespace std;

int main()

{
	double a, b, c, d;

	cout << "Enter the sides of the trapezoid (separated by a space): ";

	cin >> a >> b >> c >> d;

	double p = a + b + c + d;

	double s = ((a + b) / 4) * sqrt(4*pow(c, 2)-pow(a-b, 2));

	cout << "Perimeter of a trapezoid: " << p << endl;

	cout << "Trapezium area: " << s << endl;

	return 0;

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
