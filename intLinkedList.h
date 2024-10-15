#pragma once

#include "unorderedLinkedList.h"
#include "linkedList.h"

class intLinkedList : public unorderedLinkedList<int>
{
public:
	void splitEvensOddsList(intLinkedList &evensList, intLinkedList &oddsList);
};

void intLinkedList::splitEvensOddsList(intLinkedList &evensList, intLinkedList &oddsList) {
	nodeType<int>* current = this->first;

	while (current != nullptr) {
		if (current->info % 2 == 0) {
			if (evensList.count == 0) {
				evensList.first = current;
			}
			else {
				evensList.last->link = current;
			}
			evensList.last = current;
			evensList.count++;
			current = current->link;
			evensList.last->link = nullptr;
		}
		else {
			if (oddsList.count == 0) {
				oddsList.first = current;
			}
			else {
				oddsList.last->link = current;
			}
			oddsList.last = current;
			oddsList.count++;
			current = current->link;
			oddsList.last->link = nullptr;
		}
	}

	//Clean up so list is empty
	this->first = nullptr;
	this->last = nullptr;
	this->count = 0;
}