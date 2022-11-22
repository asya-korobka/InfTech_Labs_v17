// Task2(Restoran).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	const double butter_price = 8.50;
    const double sour_cream_price = 2.40;
    const double cream_price = 4.10;

	double butter_weight, sour_cream_weight, cream_weight;
	double butter_amount, sour_cream_amount, cream_amount;

	setlocale(0, ".1251");

	cout << "Enter the amount of butter in kg \n";
	cin >> butter_weight;
	butter_amount = butter_weight * butter_price;
	cout << "Amount of butter - " <<  butter_amount<< endl;

	cout << "Enter the amount of sour cream in kg\n";
    cin >> sour_cream_weight;
	sour_cream_amount = sour_cream_weight * sour_cream_price;
	cout << "Amount sour cream  - " << sour_cream_amount << endl;

	cout << "Enter the amount of cream in kg\n";
	cin >> cream_weight;
	cream_amount = cream_weight * cream_price;
	cout << "Amount of cream - " << cream_amount  << endl;
	cout << "Amount - " << butter_amount + sour_cream_amount + cream_amount << endl;
	
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
