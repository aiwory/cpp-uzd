#include <iostream>
#include "Structure.h"
using namespace Structure;

List::List()
{
	head = NULL;
	tail = NULL;
	curr = NULL;
	size = 0;
	currPos = 0;
	std::cout << "List created!" << std::endl;
}

List::~List()
{
	while (head != NULL) {
		Element * temp = head->next;
		delete head;
		head = temp;
		size--;
		std::cout << "Element deleted!" << std::endl;
	}
	std::cout << "List deleted!" << std::endl;
}

bool List::isFull()
{
	if (head == NULL && tail == NULL &&size == 0)
		return false;
	else
		return true;
}

bool List::isEmpty()
{
	if (head != NULL && tail != NULL &&size != 0)
		return false;
	else
		return true;
}

bool List::currIsFirst()
{
	if (curr == NULL)
		return false;
	else if (curr == head && currPos == 0)
		return true;
	else
		return false;
}

bool List::currIsLast()
{
	if (curr == NULL)
		return false;
	else if (curr == tail && currPos == size - 1)
		return true;
	else
		return false;
}

unsigned List::sizeOf()
{
	return this->size;
}

unsigned List::getCurrPos()
{
	return currPos;
}

void List::findFirst()
{
	if (this->isFull()) {
		curr = head;
		currPos = 0;
		std::cout << "Found!\n";
	}
	else
		std::cout << "Empty list!\n";
}

void List::findLast()
{
	if (this->isFull()) {
		curr = tail;
		currPos = size - 1;
		std::cout << "Found!\n";
	}
	else {
		std::cout << "Empty list!\n";
	}
}

void List::findNext()
{
	if (this->isFull() && curr != tail) {
		curr = curr->next;
		currPos++;
		std::cout << "Found!\n";
	}
	else {
		std::cout << "Empty list/Current element is last element!\n";

	}
}

void List::findPrev()
{
	if (this->isFull() && curr != head) {
		Element * temp = head;
		while (temp != curr) {
			if (temp->next == curr) {
				curr = temp;
				currPos--;
				break;
			}
			temp = temp->next;
		}
		std::cout << "Found!\n";
	}
	else {
		std::cout << "Empty list/Current element is first element!\n";
	}
}

void List::find(unsigned index)
{
	if (index < 0 || index >= size) {
		std::cout << "Empty list/Index out of range!\n";
	}
	else {
		Element * temp = head;
		for (unsigned i = 1; i <= index; i++)
			temp = temp->next;
		curr = temp;
		currPos = index;
		std::cout << "Found!\n";
	}
}

void List::findByValue(int value)
{
	if (this->isFull()) {
		Element * temp = head;
		int i = 0;
		bool found = false;
		while (temp != NULL) {
			if (temp->data == value) {
				curr = temp;
				currPos = i;
				found = true;
				break;
			}
			i++;
			temp = temp->next;
		}
		if (!found) std::cout << "Not found!\n";
		else std::cout << "Found!\n";
	}
	else std::cout << "Empty list!\n";
}

void List::prepend(int value)
{
	Element * temp = new Element;
	temp->data = value;
	if (this->isEmpty()) {
		temp->next = head;
		tail = head = curr = temp;
	}
	else {
		temp->next = head;
		head = curr = temp;
	}
	size++;
	currPos = 0;
	//std::cout << "Element is prepended to the list!" << std::endl;
}

void List::append(int value)
{
	Element * temp = new Element;
	temp->data = value;
	if (this->isEmpty()) {
		temp->next = head = tail;
		head = tail = curr = temp;
	}
	else {
		temp->next = NULL;
		tail->next = temp;
		tail = curr = temp;
	}
	size++;
	currPos = size - 1;
	//std::cout << "Element is appended to the list!" << std::endl;

}

int List::getCurr()
{
	if (curr != NULL)
		return curr->data;
	else {
		std::cout << "No current element set yet! Returning the default value...\n";
		return 0;
	}
}

void List::insertAfter(int value)

{
	if (this->isEmpty()) std::cout << "Empty list!";
	else if (curr == tail) this->append(value);
	else {
		Element * temp = new Element;
		temp->data = value;
		temp->next = curr->next;
		curr->next = temp;
		curr = temp;
		currPos++;
		size++;
		std::cout << "Data added!\n";
	}
}

void List::insertBefore(int value)
{
	if (this->isEmpty()) std::cout << "Empty list!";
	else if (curr == head) this->prepend(value);
	else {
		Element * before = head;
		while (before->next != curr) {
			before = before->next;
		}
		Element * temp = new Element;
		temp->data = value;
		temp->next = curr;
		before->next = temp;

		curr = temp;
		size++;
		std::cout << "Data added!\n";
	}
}

void List::updateCurr(int value)
{
	if (curr != NULL) {
		curr->data = value;
		std::cout << "Current element updated!\n";
	}
	else std::cout << "No current element!\n";
}

void List::deleteCurr()
{
	if (this->isEmpty())std::cout << "Empty list, nothing to delete!\n";
	else if (curr == head) {
		head = curr->next;
		if (curr == tail)
			tail = head;
		delete curr;
		curr = head;
		currPos = 0;
		size--;
		std::cout << "Current element deleted!\n";
	}
	else {
		Element * before = head;
		while (before->next != curr) {
			before = before->next;
		}
		before->next = curr->next;
		if (curr == tail)
			tail = before;
		delete curr;
		curr = head;
		currPos = 0;
		size--;
		std::cout << "Current element deleted!\n";
	}
	//std::cout << head << tail << curr;
}

void List::printAll()
{
	Element * temp = head;
	while (temp != NULL) {
		std::cout << temp->data << "  ";
		temp = temp->next;
	}
	std::cout << "\n";
}