// Lab_03_4.cpp 
// Самотуга Андрій
// Лабораторна робота № 3.4 
// Розгалуження, задане плоскою фігурою. 
// Варіант 25
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x; // вхідний аргумент 
	double y; // вхідний параметр 
	double R; // вхідне значення
	cout << " x = "; cin >> x;
	cout << " y = "; cin >> y;
	cout << " R = "; cin >> R;

	// розгалуження в повній формі 
	if ((pow(x, 2) + pow(y, 2)) <= pow(R, 2) && x >= 0 && y >= 0 
		|| (pow(x, 2) + pow(y, 2)) <= pow(R, 2) && x <= 0 && y <= 0 
		|| x <= 0 && y >= 0 && y <= x + R) {
		cout << "Yes";

	}
	else {
		cout << "No";
	}
	
	return 0;
}

