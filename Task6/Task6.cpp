// Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
    setlocale(0, ".1251");
	double m, y;

	cout << "Enter m and y: ";
	cin >> m >> y;
	double odz = (cos(2 * y) - 1);
	if  (odz==0)
		cout << "ODZ is wrong: ";
	else
		cout << "Result: "<< (pow(m, 2) + 2.8 * m + 0.355) / odz << endl;
	
	system("pause>>void");
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