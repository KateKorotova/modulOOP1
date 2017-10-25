#pragma once
#include <iostream>

using namespace std;


class Figure {
public:
	void virtual paint() = 0;
};

class Figure1 {
public:
	void paint();
};

class Figure2 {
public:
	void paint();
};