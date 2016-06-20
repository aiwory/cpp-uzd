/*
Klase Vienvirziena saistîtais saraksts un tâ apstrâdes operâcijas
Autors: Aigars Ivaòenko
Izveidots 27.02.2016.
*/

#include <iostream>
namespace Structure
{
	class List
	{
	protected:
		struct Element
		{
			int data;//Data stored in a list
			Element * next;//pointer to the following element in a list
		};
		/***************************************
		To be noted: Indexing starts from a zero
		***************************************/
		Element * head;//Pointer to the first element in a list
		Element * tail;//Pointer to the last element in a list
		Element * curr;//Pointer to the last accessed element in a list
		unsigned size;//amount of elements currently in a list
		unsigned currPos;//index of current element in a list

	public:
		List();//Constructor, initiates a list
		~List();//Destructor, removes a list from memory

		/* Service operations */
		bool isFull();//Checks if list contains any elements
		bool isEmpty();//Checks if list is empty
		bool currIsFirst();//Checks if current element is first one in a list
		bool currIsLast();//Checks if current element is last one in a list
		unsigned sizeOf();//returns amount of elements currently in a list
		unsigned getCurrPos();//returns position of current element

		/* Search operations*/
		void findFirst();//Seeks and sets first element as current
		void findLast();//Seeks and sets last element as current
		void findNext();//Seeks and sets element after current as current
		void findPrev();//Seeks and sets element before current as current
		void find(unsigned index);//Seeks and sets element at specified index as current
		void findByValue(int value);//Finds first occurance of value and sets element as current

		/*Basic operations*/
		void prepend(int value);//Adds an element to the beggining of a list and sets it as current
		void append(int value);//Adds an element to the end of a list and sets it as current
		int getCurr();//Returns current element and sets it as current
		void insertAfter(int value);//Adds element after current and and sets it as current
		void insertBefore(int value);//Adds element before current and and sets it as current
		void updateCurr(int value);//Updates current element
		void deleteCurr();//Deletes current element

		virtual void printAll();//Prints all data values in the list


	};


	
}