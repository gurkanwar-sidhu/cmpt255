#include <cstdlib>
#include <iostream>
#include "StringLinkedList.h"

using namespace std;


int main() {

	cout << "Gurkanwar Sidhu" << endl << "gss28" << endl << "301290044" << endl;

	StringLinkedList list = StringLinkedList();

	string str;

	getline (cin, str);

	list.List_append( str );

	while ( !str.empty() ){

		getline(cin, str);

		list.List_append( str );
	}
	
	int length = list.getSize();

	cout << endl << length << endl;

	list.List_output();

	int counter = 0;

	string place_holder;

	list.reverse_output();

	cout << "goodbye";		
	
	
 return EXIT_SUCCESS;
}





