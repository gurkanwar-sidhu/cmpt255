#include "StringLinkedList.h"
#include "iostream"


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

int StringLinkedList::getSize(){

	int count = 0;

	if (head == NULL){

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

void StringLinkedList::List_append(string str){

	StringNode* temp = new StringNode;

	StringNode* curr = new StringNode;
	
	temp->elem = str;

	temp->next = NULL;

	curr = head;

	if( head == NULL ){

		head = temp;

		temp = NULL;
	}
		
	else{

		while( curr->next != NULL ){

			curr = curr->next;
		}

		curr->next = temp;
	}
}

void StringLinkedList::List_output(){

	StringNode* temporary = new StringNode;

	temporary = head;

	while ( temporary != NULL ){

		cout << temporary->elem <<" ";
	
		temporary = temporary->next;
	}

	cout << endl;
}

void StringLinkedList::reverse_output(){

	StringNode* prev = new StringNode;

	StringNode* current = new StringNode;

	StringNode* after = new StringNode;

	prev = NULL;

	current = head;

	after = NULL;

	while( current != NULL ){

		after = current->next;

		current->next = prev;

		prev = current;

		current = after;
	}

	head = prev;

	StringNode* i = new StringNode;

	i = head;

	while ( i != NULL ){

		cout << i->elem << endl;

		i = i->next;
	}
}
	
