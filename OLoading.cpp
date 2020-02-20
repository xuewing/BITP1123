//Oloading.h
#ifndef OLOADING_H
#define OLOADING_H

class OLoading
{
private:
	double loan;
public:
	OLoading();
	OLoading(double);
	~OLoading();
	double Payment(int, double);
	double Payment(int, double, double);

};
#endif

//OLoading.cpp
#include <iostream>
#include "OLoading.h"
using namespace std;

OLoading::OLoading() {
	loan = 10000;
}

OLoading::OLoading(double l) {
	loan = l;
}

OLoading::~OLoading() {}

double OLoading::Payment(int month, double interest)
{
	return (loan / month * interest);

}

double OLoading::Payment(int year, double interest, double deposit)
{
	return (deposit-(loan/(12*year)*interest));

}

//Utama.cpp
#include <iostream>
#include "OLoading.h"
using namespace std;

void main()
{
	int month, year;
	double interest, deposit, loan;
	double pay;

	OLoading Siti;

	cout << "Enter loan duration in month:";
	cin >> month;
	cout << "Enter interest rate:";
	cin >> interest;

	pay = Siti.Payment(month, interest);

	cout << "Siti Total Payment per month : RM" << pay;
	cout << "\n\nEnter Loan for Minah:";
	cin >> loan;

	OLoading Minah(loan);

	cout << "Enter loan duration in year:";
	cin >> year;
	cout << "Enter interest rate:";
	cin >> interest;
	cout << "Enter the deposit";
	cin >> deposit;

	pay = Minah.Payment(year, interest,deposit);

	cout << "\nMinah Total Payment per month : RM" << pay;
	cout << endl;
	
	system ("pause");


}
