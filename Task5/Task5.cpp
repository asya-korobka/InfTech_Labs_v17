// Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	const double b = 3;

	cout << "Enter x = 5.2 \n";
	double x = 5.2;
	cin >> x;

	double t = (pow(b, 2)) + sqrt(b * x);
	cout << "t =  " <<  t << endl;

	double a = log10(abs(t + (pow(b, 2))));
	cout << "a =  " <<  a << endl;

	double y = exp(a + b);
	cout << "y =  " <<  y << endl;

	system("pause>>void");
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
