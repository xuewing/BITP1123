//First.cpp
#ifndef FIRST_H
#define FIRST_H
class First
{
	friend class Second;

private:
	int x;
public:
	First();
	~First();
	void setX(int);
	void prinbtData();
};
#endif

//First.cpp
#include <iostream>
#include "First.h"
using namespace std;

First::First() {
	x = 5;
}

First::~First() {}

void First::setX(int a) {
	x = a;
}

void First::prinbtData() {
	cout << "X is :" << x << endl;
}

//Second.cpp
#ifndef SECOND_H
#define SECOND_H
class First;
class Second
{
private:
	int y;
public:
	Second();
	~Second();
	void Print(First);
};
#endif

//First.cpp
#include <iostream>
#include "Second.h"
#include "First.h"
using namespace std;

Second::Second() {
	y=2;
}

Second::~Second() {}

void Second::Print(First yc){
	cout << "X is : " << y + yc.x << endl;
}

//Utama.cpp
#include <iostream>
#include "Second.h"
#include "First.h"
using namespace std;

void main() {
	Second nd;
	First fs;
	cout << "Y value from class Second:";
	nd.Print(fs);
	fs.setX(4);
	cout << "\nX value from class First:";
	fs.prinbtData();
	cout << "\nY value from class Second:";
	nd.Print(fs);

	getchar();
}
