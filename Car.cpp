//Example 1 - Car.h
//Define class Car
//Interface for class Car

#ifndef CAR_H
#define CAR_H

class Car
{
private:
	int numOfTyre;

public:
	Car(int tyre);
	~Car();

	void stop();
};
#endif

//Car.cpp
//The definition of class interface in Car.h

#include <iostream>
#include "Car.h"
using namespace std;

//Constructor
Car::Car(int tyre)
{
	numOfTyre = tyre;
}

//Destructor
Car::~Car() { }

//Method stop
void Car::stop()
{
	cout << "Please stop now!" << numOfTyre << "tyre" << endl;
}

//CarMain.cpp
//Implementation
//Include the object declaration and method implementation

#include <iostream>
#include "Car.h"
using namespace std;

void main()
{
	Car Kembara(5);
	Car Kancil(4);

	Kembara.stop();

	Kancil.stop();

	getchar();
}
