//Topup.h
#ifndef TOPUP_H
#define TOPUP_H

template <class T1, class T2>
class Topup
{
private:
	T1 nilai1;
	T2 nilai2;

public:
	Topup(T1, T2);
	void Display();
	void Execute();
};
#endif

template <class T1, class T2>
Topup <T1, T2>::Topup(T1 x, T2 y)
{
	nilai1 = x;
	nilai2 = y;
}

template <class T1, class T2>
void Topup <T1, T2>::Display()
{
	cout << "Total loan: " << nilai1 << endl;
	cout << "Interest rate: " << nilai2 << endl;
}

template <class T1, class T2>
void Topup <T1, T2>::Execute()
{
	cout << "Total must be paid: " << nilai1 + (nilai1*nilai2) << endl;
}

template class Topup <int, double>;

// Exercise3.cpp

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Topup.h"

void main()
{
	Topup <int, double> no1(1000, 4.5), no2(20000, 11.1);
	cout << "Output created by the " << "first object\n";
	no1.Display();
	no1.Execute();
	cout << "\nOutput created by the " << "second object\n";
	no2.Display();
	no2.Execute();
	system("pause");
}

