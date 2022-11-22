// Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double aX = 0, aY = 0, bX = 17, bY = 16, cX = -17, cY = 18;

	double ab = sqrt(pow(abs(aX - bX), 2) + pow(abs(aY - bY), 2));
	double bc = sqrt(pow(abs(bX - cX), 2) + pow(abs(bY - cY), 2));
	double ca = sqrt(pow(abs(cX - aX), 2) + pow(abs(cY - aY), 2));
	double mediana = sqrt((2 * pow(ab, 2) + 2 * pow(ca, 2) - pow(bc, 2)) / 4);
	cout << "Mediana length =  " << mediana << endl;

	double halfperimetr = ((ab + bc + ca) / 2);
	double innerRadius = sqrt((halfperimetr-ab)*(halfperimetr-bc)*(halfperimetr-ca)/halfperimetr);
	cout << "Inner radius =  " << innerRadius << endl;
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
