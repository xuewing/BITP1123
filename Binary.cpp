//binary.h
#ifndef BINARY_H
#define BINARY_H

const int SIZE = 10;
class Binary
{
public:
	int locationWanted;
	int array[SIZE];
	bool BinarySearch(int[], int, int, int&);

};
#endif

// Binary.cpp
#include"stdafx.h"
#include <iostream>
using namespace std;
#include "Binary.h"

bool Binary::BinarySearch(int array[], int SIZE, int target, int& locWanted)
{
	int mid = 0, begin = 0, end = SIZE - 1;

	while (begin <= end)
	{
		cout << "\n\tmid= " << mid;
		cout << " begin = " << begin;
		cout << " end= " << end;
		mid = (begin + end) / 2;
		if (target > array[mid])
			begin = mid + 1;
		else if (target < array[mid])
			end = mid - 1;
		else
			begin = end + 1;
	}
	locWanted = mid;
	return (target == array[mid]);
}

//Utama.cpp
#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Binary.h"

int main()
{
	int target, no, i = 0;
	bool found;
	Binary BS;

	cout << "The Data\n";
	/*generate an ordered random number list*/
	BS.array[0] = 1;
	no = rand() % 500 + 1;
	while (i < SIZE)
	{
		if (no >= BS.array[i - 1])
		{
			BS.array[i] = no;
			i++;
		}
		no = rand() % 500 + 1;
	}
	for (i = 0; i < SIZE; i++)
		cout << BS.array[i] << " ";
	cout << endl;
	cout << "Insert  a target, or 0 to stop: ";
	cin >> target;

	do {
		found = BS.BinarySearch(BS.array, SIZE, target, BS.locationWanted);

		if (found)
		{
			cout << "\n\tFound " << target << " at index " << BS.locationWanted << endl;
		}
		else
		{
			cout << "\n\tTarget not found" << endl;
		}
		{
			cout << "\nInsert a target, or 0 to stop: ";
			cin >> target;
		}
	} while (target != 0);
}
