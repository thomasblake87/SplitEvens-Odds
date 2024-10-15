#include <iostream>
#include "intLinkedList.h"

using namespace std;

int main()
{
	intLinkedList list, evensList, oddsList;
	int num;


	cout << "Enter integers ending with -999: " << endl;

	for (;;) {
		cin >> num;
		if (num == -999) {
			break;
		}
		list.insertLast(num);
	}

	//Print list
	cout << "List: ";
	for (auto it = list.begin(); it != list.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;

	list.splitEvensOddsList(evensList, oddsList);

	//Print evens list and odds list
	cout << "Evens list: ";
	for (auto it = evensList.begin(); it != evensList.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "Odds list: ";
	for (auto it = oddsList.begin(); it != oddsList.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}
