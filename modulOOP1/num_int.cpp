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

Pl_int Pl_int::operator+=(int b) {
	Pl_int res;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) 
		arr[i] = mas[i];
	mas = new int[size + 1];
	for (int i = 0; i < size; ++i)
		mas[i] = arr[i];
	int num = 0;
	for (int i = 0; i < size && b == 0; ++i)
		if (mas[i] == b)
			num = 1;
	if (num)
		throw exception(" exist");
	else
		mas[size] = b;
	return *this;

}