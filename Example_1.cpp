// Example_1.cpp
#include <iostream>
#include "stdafx.h"
using namespace std;

template <class T>
void Change(T x, T y)
{
	cout << "Before Change: first value: " << x << "\n\t\t second value: " << y << endl << endl;
	T a;
	a = x;
	x = y;
	y = a;
	cout << "After change:first value: " << x << "\n\t\t second value: " << y << endl << endl;
}

int main()
{
	Change('s', 'k');
	Change(90, 2);

	system("pause");
}
