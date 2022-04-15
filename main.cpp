#include <iostream>
#include "Triangle.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	Triangle a(0,1);
	cout << a++ <<  "   operator++   " << endl;
	cout << a << endl;
	
	cout << ++a<< "  operator++ постфіксного " << endl;
	
	cout << --a << "  operator-- постфіксного  " << endl;
	cout << a++ << endl;
	cout << "ВВедить сторони катета ->" << endl;
	cin >> a;
	cout << "Гипотенуза трикутника= " << a.Gipotenuza()<< endl;
	cin.get();
	return 0;
}