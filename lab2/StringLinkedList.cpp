#include "StringLinkedList.h"


	StringLinkedList::StringLinkedList()
//constructor
	: head(NULL) { } //
	StringLinkedList::~StringLinkedList()
//destructor
		{ while (!empty()) removeFront(); } //

	bool StringLinkedList::empty() const

		{ return head == NULL; } // is list empty?

	const string& StringLinkedList::front() const
// getfront element
		{ return head->elem; }

	void StringLinkedList::addFront(const string& e) {
//add to front of list
	StringNode* v = new StringNode;
// create new node
	v->elem = e;// store data
	v->next = head;// head now follows v
	head = v;// v is now the head
	}

void StringLinkedList::removeFront() {	// removefront item
	
	StringNode* old = head;		// save current head

	head = old->next;		// skip over old head

	delete old;			// delete the old head

}

int StringLinkedList::getSize(StringLinkedList list){

	int count = 0;

	if (list->head == NULL){

		return count;
	}

	else{

		StringNode* tmp = new StringNode;

		tmp = head->next;

		while( tmp != NULL ){

			count++;

			tmp = tmp->next;
		}
	}

 return count;
}

	
