#include <cstdlib>
#include <iostream>
#include "StringLinkedList.h"

using namespace std;

void List_append ( StringLinkedList, string );

void List_output (StringLinkedList);

int main() {

	StringLinkedList list = StringLinkedList();

	string str;

	cin >> str;

	/*StringNode* curr = new StringNode;

	list->head->next = curr;

	StringNode* after = new StringNode;

	after = list->curr->next;*/

	
	while ( str != "\0" ){

		cin >> str;

		List_append( list, str );
	}
	
	int length = getSize();


	cout << "Gurkanwar Sidhu" << endl << "gss28" << endl << "301290044" << endl;

	cout << length << endl;

	List_output( list );

	cout << endl;

	int counter = 0;

	string place_holder;

	while ( counter < length ){

		place_holder = front( list );

		List_append( list, place_holder );

		removeFront( list );

		counter++;
	}

	StringNode* i = new StringNode;

	i = list->head;

	while ( i != NULL ){

		cout << i->elem << endl;

		i = i->next;
	}

	cout << "goodbye";		
	
	
 return EXIT_SUCCESS;
}

void List_append ( StringLinkedList list, string str ){

	StringNode* temp = new StringNode;
	
	temp->elem = str;

	temp->next = NULL;

	if( head == NULL ){

		head = temp;

		tail = temp;

		temp = NULL;
	}
		
	else{

		tail->next = temp;

		tail = temp;
	}
}

void List_output (StringLInkedList list){

	StringNode* temporary = new StringNode;

	temporary = list->head;

	while ( temporary != NULL ){

		cout <<" "<< temporary->elem<<" ";
	
		temporary = temporary->next;
	}

	cout << endl;
}



