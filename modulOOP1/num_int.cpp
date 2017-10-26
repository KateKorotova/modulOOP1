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

Pl_int& Pl_int::operator+=(int b) {

	for (int i = 0; i < size; i++) {
		if (mas[i] == b)
			return *this;
	}
	int* newmas = new int[size + 1];
	for (int i = 0; i < size; i++) {
		newmas[i] = mas[i];
	}
	size++;
	newmas[size - 1] = b;
	if (mas != nullptr)
		delete[] mas;
	mas = newmas;
	return *this;
}


Pl_int& Pl_int::operator-=(int b) {
	int index = -1;
	for (int i = 0; i < size && index == -1; i++) {
		if (mas[i] == b)
			index = i;
	}
	if (index == -1)
		return *this;
	//throw exception("Not exist");
	if (size == 1) {
		size = 0;
		delete[] mas;
		mas = nullptr;
		return *this;
	}

	int* newmas = new int[size - 1];
	for (int i = 0; i < index; i++) {
		newmas[i] = mas[i];
	}
	for (int i = index + 1; i < size; i++) {
		newmas[i - 1] = mas[i];
	}
	size--;
	if (mas != nullptr)
		delete[] mas;
	mas = newmas;
	return *this;
}

Pl_int Pl_int::operator +(const Pl_int& b) {
	Pl_int ans = *this;
	for (int i = 0; i < b.size; i++) {
		ans += b.mas[i];
	}
	return ans;
}

bool Pl_int::operator==(const Pl_int& b) {
	if (this == &b)
		return true;
	if (size != b.size)
		return false;
	for (int i = 0; i < b.size; i++) {
		bool exist = false;
		for (int j = 0; j < size && !exist; j++) {
			if (mas[j] == b.mas[i])
				exist = true;
		}
		if (!exist) {
			return false;
		}
	}
	return true;
}