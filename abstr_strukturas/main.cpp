#include <iostream>
#include "abstract.h"
using namespace std;

int main() {
	char menu;
	char e;
	cout << "1. Stack\n2.Queue\n3.Deque" << endl;
	cin >> menu;

	if (menu == '1') {
		Stack * steks = new Stack();
		cout << "Adding numbers from 1 to 5 to the stack..." << endl;
		steks->push(1);
		steks->push(2);
		steks->push(3);
		steks->push(4);
		steks->push(5);
		cout << "All elements from the last to the first" << endl;
		steks->printAll();
		cout << "Amount of elements: " << steks->sizeOf() << endl;
		cout << "Top: " << steks->top() << endl;
		cout << "Deleting top..." << endl;
		steks->pop();
		steks->printAll();
		cout << "Amount of elements: " << steks->sizeOf() << endl;
		cout << "Top: " << steks->top() << endl;
		cout << "Deleting top..." << endl;
		steks->pop();
		steks->printAll();
		cout << "Amount of elements: " << steks->sizeOf() << endl;
		cout << "Top: " << steks->top() << endl;
		cout << "Deleting top..." << endl;
		steks->pop();
		steks->printAll();
		cout << "Amount of elements: " << steks->sizeOf() << endl;
		cout << "Top: " << steks->top() << endl;
		cout << "Adding new number 15..." << endl;
		steks->push(15);
		steks->printAll();
		cout << "Amount of elements: " << steks->sizeOf() << endl;
		cout << "Top: " << steks->top() << endl;


		cout << "Enter any key and press enter to exit...";
		cin >> e;
		delete steks;
	}
	else if (menu == '2') {
		Queue * rinda = new Queue();
		cout << "Adding numbers from 1 to 5 to the queue..." << endl;
		rinda->push(1);
		rinda->push(2);
		rinda->push(3);
		rinda->push(4);
		rinda->push(5);
		cout << "All elements from the first to the last" << endl;
		rinda->printAll();
		cout << "Amount of elements: " << rinda->sizeOf() << endl;
		cout << "First: " << rinda->front() << endl;
		cout << "Deleting first..." << endl;
		rinda->pop();
		rinda->printAll();
		cout << "Amount of elements: " << rinda->sizeOf() << endl;
		cout << "First: " <<rinda->front() << endl;
		cout << "Deleting first..." << endl;
		rinda->pop();
		rinda->printAll();
		cout << "Amount of elements: " << rinda->sizeOf() << endl;
		cout << "First: " << rinda->front() << endl;
		cout << "Deleting First..." << endl;
		rinda->pop();
		rinda->printAll();
		cout << "Amount of elements: " << rinda->sizeOf() << endl;
		cout << "First: " << rinda->front() << endl;
		cout << "Adding new number 15..." << endl;
		rinda->push(15);
		rinda->printAll();
		cout << "Amount of elements: " << rinda->sizeOf() << endl;
		cout << "First: " <<rinda->front() << endl;
		cout << "Adding new number 22..." << endl;
		rinda->push(22);
		rinda->printAll();
		cout << "Amount of elements: " << rinda->sizeOf() << endl;
		cout << "First: " << rinda->front() << endl;


		cout << "Enter any key and press enter to exit...";
		cin >> e;
		delete rinda;
	}
	else if (menu == '3') {
		Deque * kava = new Deque();
		cout << "Adding numbers from 1 to 5 to the deque..." << endl;
		kava->push_back(1);
		kava->push_back(2);
		kava->push_back(3);
		kava->push_back(4);
		kava->push_back(5);
		cout << "All elements from the first to the last" << endl;
		kava->printAll();
		cout << "Amount of elements: " << kava->sizeOf() << endl;
		cout << "First: " << kava->front() << endl;
		cout << "Last: " << kava->back() << endl;
		cout << "Deleting first..." << endl;
		kava->pop_front();
		kava->printAll();
		cout << "Amount of elements: " << kava->sizeOf() << endl;
		cout << "First: " << kava->front() << endl;
		cout << "Last: " << kava->back() << endl;
		cout << "Deleting first..." << endl;
		kava->pop_front();
		kava->printAll();
		cout << "Amount of elements: " << kava->sizeOf() << endl;
		cout << "First: " << kava->front() << endl;
		cout << "Last: " << kava->back() << endl;
		cout << "Deleting First..." << endl;
		kava->pop_front();
		kava->printAll();
		cout << "Amount of elements: " << kava->sizeOf() << endl;
		cout << "First: " << kava->front() << endl;
		cout << "Last: " << kava->back() << endl;
		cout << "Adding new number 15 at front..." << endl;
		kava->push_front(15);
		kava->printAll();
		cout << "Amount of elements: " << kava->sizeOf() << endl;
		cout << "First: " <<kava->front() << endl;
		cout << "Last: " << kava->back() << endl;
		cout << "Adding new number 22 at front..." << endl;
		kava->push_front(22);
		kava->printAll();
		cout << "Amount of elements: " << kava->sizeOf() << endl;
		cout << "First: " << kava->front() << endl;
		cout << "Last: " << kava->back() << endl;
		cout << "Adding new number 13 at front..." << endl;
		kava->push_front(13);
		kava->printAll();
		cout << "Amount of elements: " << kava->sizeOf() << endl;
		cout << "First: " << kava->front() << endl;
		cout << "Last: " << kava->back() << endl;
		cout << "Deleting last..." << endl;
		kava->pop_back();
		kava->printAll();
		cout << "Amount of elements: " << kava->sizeOf() << endl;
		cout << "First: " << kava->front() << endl;
		cout << "Last: " << kava->back() << endl;
		cout << "Deleting last..." << endl;
		kava->pop_back();
		kava->printAll();
		cout << "Amount of elements: " << kava->sizeOf() << endl;
		cout << "First: " << kava->front() << endl;
		cout << "Last: " << kava->back() << endl;
		cout << "Enter any key and press enter to exit...";
		cin >> e;
		
		delete kava;
	}
	return 0;
}