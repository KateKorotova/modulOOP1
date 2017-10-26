#pragma once
#include <iostream>

using namespace std; 

class Pl_int {
private:
	int* mas;
	int size;
public:
	Pl_int();
	Pl_int(int* arr, const int n);
	Pl_int(const Pl_int & other);
	Pl_int operator +(const Pl_int& b);
	Pl_int& operator +=(int b);
	Pl_int& operator -=(int b);
	bool operator == (const Pl_int& b);
	Pl_int& operator=(const Pl_int& b);

	friend istream& operator >> (istream& os, Pl_int& num);
	friend ostream& operator<< (ostream& os, const Pl_int& num);

};
