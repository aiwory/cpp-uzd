#include <iostream>
#include "Structure.h"
using namespace std;


int main() {

	char main;
	cout << "1.List\n2.Stack\n3.Que\n4.Deque\ne Exit\n";
	cin >> main;

	switch(main){
	case '1'://For list
		Structure::List * saraksts = new Structure::List;

		char menu;
		int data;
		unsigned index;

		do{
			cout << "Select operation by entering character and press Enter(h. for help)\n1. Append to the list 2. Prepend to the list 3. Check if list is full\n"<<
				"4. Check if list is Empty 5. Get count of elements 6.Get index of current element\n"<<
				"7. Print all elements 8.Check if current is first 9. Check if current is last\n"<<
				"0. get current element f. Find element by index d. delete current element\n"<<
				"a. Insert after current b. Insert before current u. Update current\n"<<
				"i. Find first t.Find last n.Find next p. Find previous v.Find first occuring value\ne. Exit: ";
			cin >> menu;
			cout << '\n';
			switch (menu) {
			case '1':
				cout << "Enter your data to append to the list: ";
				cin >> data;
				saraksts->append(data);
				cout << "Data appended!\n";
				break;
			case '2':
				cout << "Enter your data to prepend to the list: ";
				cin >> data;
				saraksts->prepend(data);
				cout << "Data prepended!\n";
				break;
			case '3':
				if (saraksts->isFull()) cout << "List is full\n";
				else cout << "List is empty\n";
				break;
			case '4':
				if (saraksts->isEmpty()) cout << "List is empty\n";
				else cout << "List is full\n";
				break;
			case '5':
				cout << "List contains of " << saraksts->sizeOf() << " elements\n";
				break;
			case '6':
				cout << "Current element position is: " << saraksts->getCurrPos() << "\n";
				break;
			case '7':
				cout << "All elements: ";
				saraksts->printAll();
				break;
			case '8':
				if (saraksts->currIsFirst()) cout << "Current element is first!\n";
				else cout << "Current element is not first!\n";
				break;
			case '9':
				if (saraksts->currIsLast()) cout << "Current element is last!\n";
				else cout << "Current element is not last!\n";
				break;
			case '0':
				cout << "Current element is: " << saraksts->getCurr() << '\n';
				break;
			case 'f':
				cout << "Enter index (starts from zero): "; cin >> index;
				saraksts->find(index);
				break;
			case 'd':
				saraksts->deleteCurr();
				break;
			case 'e':
				break;
			case 'a':
				cout << "Enter your data to add after current: ";
				cin >> data;
				saraksts->insertAfter(data);
				break;
			case 'b':
				cout << "Enter your data to add before current: ";
				cin >> data;
				saraksts->insertBefore(data);
				break;
			case 'u':
				cout << "Enter your data to update current: ";
				cin >> data;
				saraksts->updateCurr(data);
				break;
			case 'i':
				saraksts->findFirst();
				break;
			case 't':
				saraksts->findLast();
				break;
			case 'n':
				saraksts->findNext();
				break;
			case 'p':
				saraksts->findPrev();
				break;
			case 'v':
				cout << "Enter your data to find: ";
				cin >> data;
				saraksts->findByValue(data);
				break;
			case 'h':
				cout << "Current element is set by append/prepend and search operations\n" <<
					"FindNext, FindPrev, InsertBefore, InsertAfter operations won't work without current element\n";
				break;
			default:
				cout << "Wrong selection!\n";
			}
			cout << '\n';

		}while (menu != 'e');
		delete saraksts;
		break;

	case '2'://For stack

		char menu;
		int data;
		Structure::Stack * steks = new Structure::Stack();
		cout << "Select operation by entering character and press Enter\n";
		cout << "1.Push\n";
		cout << "2.Get Top\n";
		cout << "3.Pop\n";
		cout << "4.Get size\n";
		cout << "5.Print all elements\n";
		cout << "e Exit\n";
		break;
		cin >> menu;
		switch (menu) {
		case '1':
			steks->push(1);
			steks->push(2);
			steks->push(3);
			steks->push(4);
			steks->push(5);
			break;
		case '2':
			steks->top();
			break;
		case '3':
			steks->pop();
			break;
		case '4':
			steks->size();
			break;
		case '5':
			steks->printAll();
			break;
		case 'e':
			break;


		}
	}
	return 0;
}