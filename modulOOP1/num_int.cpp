#include "num_int.h"

using namespace std;

Pl_int::Pl_int() {

};
Pl_int::Pl_int(int* arr, const int n)
{
	mas = new int[n];
	for (int i = 0; i < n; ++i)
		mas[i] = arr[i];
	size = n;
}

Pl_int::Pl_int(const Pl_int & other)
{
	size = other.size;
	mas = new int[size];
	for (int i = 0; i < size; ++i)
		mas[i] = other.mas[i];
}

Pl_int operator += (const Pl_int& b) {

}