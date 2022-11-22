// Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;


int main()
{
	setlocale(0, ".1251");
	double inputData[5][2] =
	{
		{25,-5},
		{16, -4},
		{36, -6},
		{256, -16},
		{4, -2}
	};
	for (int i = 0; i < 5; i++)
	{
		double m = inputData[i][0];
		double z1 = -1*sqrt(pow(3 * m + 2, 2) - 24 * m) / (3 * sqrt(m) - 2 / sqrt(m));
		double z2 = inputData[i][1];
		printf("Input answer for %7.2f = %7.2f, calculated answer = %7.2f\n", m, z2, z1);
	}
	system("pause >> void");
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
