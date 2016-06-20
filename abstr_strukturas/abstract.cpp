#include "abstract.h"
#include <iostream>

Stack::Stack()
{
	head = NULL;
	size == 0;
}

Stack::~Stack()
{
	while (head != NULL) {
		Elem * temp = head->next;
		delete head;
		head = temp;
		size--;
	}
	

}

void Stack::push(int value)
{
	Elem * temp = new Elem;
	temp->data = value;
	if (head==NULL) {
		temp->next = NULL;
		head = temp;
	}
	else {
		temp->next = head;
		head = temp;
	}
	size++;

}

int Stack::top()
{
	return head->data;
}

void Stack::pop()
{
	if (head != NULL) {
		Elem * temp = head->next;
		delete head;
		head = temp;
		size--;
	}
}

unsigned int Stack::sizeOf()
{
	return size;
}

void Stack::printAll()
{
	Elem * temp = head;
	while (temp != NULL) {
		std::cout << temp->data << "  ";
		temp = temp->next;
	}
	std::cout << "\n";
}

Queue::Queue()
{
	head = NULL;
	tail = NULL;
	size == 0;
}

Queue::~Queue()
{
	while (head != NULL) {
		Elem * temp = head->next;
		delete head;
		head = temp;
		size--;
	}
}

void Queue::push(int value)
{
	Elem * temp = new Elem;
	temp->data = value;
	if (head==NULL) {
		temp->next = NULL;
		head = tail = temp;
	}
	else {
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}
	size++;
}

int Queue::front()
{
	return head->data;
}

void Queue::pop()
{
	if (head != NULL) {
		Elem * temp = head->next;
		if (tail == head)
			tail = head->next;
		delete head;
		head = temp;
		size--;
	}
}

unsigned Queue::sizeOf()
{
	return size;
}

void Queue::printAll()
{
	Elem * temp = head;
	while (temp != NULL) {
		std::cout << temp->data << "  ";
		temp = temp->next;
	}
	std::cout << "\n";
}

Deque::Deque()
{
	head = NULL;
	tail = NULL;
	size == 0;
}

Deque::~Deque()
{
	while (head != NULL) {
		Elem * temp = head->next;
		delete head;
		head = temp;
		size--;
	}
}

void Deque::push_back(int value)
{
	Elem * temp = new Elem;
	temp->data = value;
	if (head == NULL) {
		temp->next = NULL;
		temp->prev = NULL;
		head = tail = temp;
	}
	else {
		temp->next = NULL;
		temp->prev = tail;
		tail->next = temp;
		tail = temp;
	}
	size++;
}

void Deque::push_front(int value)
{
	Elem * temp = new Elem;
	temp->data = value;
	if (head == NULL) {
		temp->next = NULL;
		temp->prev = NULL;
		head = tail = temp;
	}
	else {
		temp->next = head;
		temp->prev = NULL;
		head->prev = temp;
		head = temp;
	}
	size++;

}

int Deque::front()
{
	return head->data;
}

int Deque::back()
{
	return tail->data;
}

void Deque::pop_front()
{
	if (head != NULL) {
		Elem * temp = head->next;
		if (tail == head)
			tail = head->next;
		delete head;
		if(temp!=NULL)
			temp->prev = NULL;
		head = temp;
		size--;
	}
}

void Deque::pop_back()
{
	if (tail != NULL) {
		Elem * temp = tail->prev;
		if (tail == head)
			tail = head->next;
		delete tail;
		if (temp != NULL) {
			temp->next = NULL;
			tail = temp;
		}
		size--;
	}
}

unsigned Deque::sizeOf()
{
	return size;
}

void Deque::printAll()
{
	Elem * temp = head;
	while (temp != NULL) {
		std::cout << temp->data << "  ";
		temp = temp->next;
	}
	std::cout << "\n";
}
