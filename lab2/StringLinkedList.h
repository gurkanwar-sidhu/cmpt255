#ifndef STRINGLINKEDLIST_H_
#define STRINGLINKEDLIST_H_
#include "StringNode.h"

	class StringLinkedList {
// a linked list of strings
	public:
		StringLinkedList();
// empty list constructor
		~StringLinkedList();	// destructor
		bool empty() const;		// is list empty?
		const string& front() const;	// get front element
		void addFront(const string& e);	// add to front oflist
	
	void removeFront();		// remove front item list
	int getSize(StringLinkedList list);

	private:
		StringNode* head;	// pointer to the head of list

	};


#endif /* STRINGLINKEDLIST_H_ */







