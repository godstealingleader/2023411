#include <iostream>

int main()
{
	using namespace std;
	double km = 0, L = 0;
	cout << "please enter KM:"; cin >> km;
	cout << "please enter L:"; cin >> L;
	cout << "fuel consumption per hundred kilometers: " << L / km * 100;
	return 0;
}