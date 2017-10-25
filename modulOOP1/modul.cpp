#include "modul.h"

using namespace std;

void Figure1::paint() {
	cout << "  " << "*" << endl;
	cout << "*" << "   " << "*" << endl;
	cout << " " << "*" << " " << "*" << endl;
}

void Figure2::paint() {
	cout << "***" << endl;
	cout << "*" << " " << "*" << endl;
	cout << "***" << endl;
}

int main() {
	Figure* figure = nullptr;
	cout << "Choice a figure: 1 or 2" << endl;
	int ch;
	cin >> ch; 
	if (!cin.fail()) {
		switch (ch) {
		case 1: 
			figure = new Figure1();
			figure->paint();
			break;
		case 2:
			figure = new Figure2();
			figure->paint();
			break;
		}
	}
	system("pause");
}