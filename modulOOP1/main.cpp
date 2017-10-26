#include <iostream>
#include "num_int.h"

using namespace std;

int main() {

	int mas1[] = { 0, 1, 2, 3, 4 };
	int mas2[] = { 3, 4, 5, 6, 7 };

	Pl_int a(mas1, 5);
	Pl_int b(mas2, 5);

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	cout << "Sum test: ";
	cout << a + b << endl;

	cout << "Add 8 to a: ";
	a += 8;
	cout << a << endl;

	cout << "Add 0 to A: ";
	a += 8;
	cout << a << endl;

	cout << "Del 0 from A: ";
	a -= 0;
	cout << a << endl;

	cout << "Del 12 from A: ";
	a -= 12;
	cout << a << endl;

	cout << "Compate A and B: ";
	cout << (a == b) << endl;

	Pl_int c = a;
	cout << "C: " << c << endl;
	cout << "Compate A and C: ";
	cout << (a == c) << endl;


	system("pause");
}