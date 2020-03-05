//Sequential.h
#ifndef SEQUENTIAL_H
#define SEQUENTIAL_H
const int SIZE = 10;
class Sequential
{
public:
	int locationWanted;
	int array[SIZE];
	bool SequentialSearch(int[], int, int, int&);
};
#endif


// Sequential.cpp 
#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Sequential.h"

bool Sequential::SequentialSearch(int array[], int SIZE, int target, int& locWanted)
{
	int index = 0;
	bool found = false;
	while (index < SIZE - 1)
	{
		if (array[index] != target)
			index++;
		else {
			found = true;
			locWanted = index;
			break;
		}
	}
	return found;
}

//Utama.cpp
#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Sequential.h"

int main()
{
	int target, i;
	bool found;
	Sequential SS;

	cout << "The Data\n";
	for (i = 0; i < SIZE; i++)
	{
		SS.array[i] = rand() % 500 + 1;
	}

	for (i = 0; i < SIZE; i++)
	{
		cout << SS.array[i] << " ";
	}
	cout << endl;
	cout << "Insert a target, or 0 to stop: ";
	cin >> target;
	do
	{
		found = SS.SequentialSearch(SS.array, SIZE, target, SS.locationWanted);

		if (found)
		{
			cout << "\tFound " << target << "at index" << SS.locationWanted << endl;
		}
		else
		{
			cout << "\tTarget not found" << endl;
		}
		{
			cout << "\nInsert a target, or 0 to stop: ";
			cin >> target;
		}
	} while (target != 0);
}
