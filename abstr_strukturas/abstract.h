#pragma once
#include <iostream>

/*
Class for stack (LIFO)
*/
class Stack 
{
private:
	struct Elem
	{
		int data;
		Elem * next;
	};

	Elem * head;
	unsigned size;

public:
	Stack();//Destructor
	~Stack();//Constructor
	void push(int value);//adds element to the stack
	int top();//Gets top element from the stack
	void pop();//Removes top element from the stack
	unsigned sizeOf();//Gets size of the stack
	void printAll();//Prints all elements in the stack from first to last




};

/*
Class for queue (FIFO)
*/
class Queue
{
private:
	struct Elem
	{
		int data;
		Elem * next;
	};

	Elem * head;
	Elem * tail;
	unsigned size;

public:
	Queue();//Destructor
	~Queue();//Constructor
	void push(int value);//adds element to the queue
	int front();//Gets first element of the quque
	void pop();
	unsigned sizeOf();//Gets size of the queue
	void printAll();//Prints all elements in the stack from first to last




};

/*
Class for deque
*/
class Deque
{
private:
	struct Elem
	{
		int data;
		Elem * next;
		Elem * prev;
	};

	Elem * head;
	Elem * tail;
	unsigned size;

public:
	Deque();//Destructor
	~Deque();//Constructor
	void push_back(int value);//adds element to the queue
	void push_front(int value);//adds element to the queue
	int front();//Gets first element of the quque
	int back();
	void pop_front();
	void pop_back();
	unsigned sizeOf();//Gets size of the queue
	void printAll();//Prints all elements in the stack from first to last




};