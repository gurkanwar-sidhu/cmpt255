/* 
**  a4.cpp
**  Assignment 4, CMPT-225
**
**  Reads a sequence of integers (in the range of int's) from standard in;
**  It is interpreted as two lists, separated by a single 0
**/
#include <iostream>
#include <list>

using namespace std;
using std::list;

int main(){

	list <int> List_1;

	int value;

	cin >> value;

	if( value == 0 ){
		cout << "301290044 gss28 Gurkanwar Sidhu" << endl;
		cout << "None" << endl;
		return 0;
	}

	while( value != 0 ){
		cin >> value;
		List_1.push_back(value);
	}

	if( value == 0 ){
		List_1.pop_back();
	}
		
	while( !cin.eof() ){
		cin >> value;
		List_1.remove(value);
	}

	if( List_1.empty() ){
		cout << "301290044 gss28 Gurkanwar Sidhu" << endl;
		cout << "None" << endl;
		return 0;
	}

	int List_1_max = List_1.front();
	
	while( List_1.size() != 0 ){
		if( List_1_max < List_1.front() ){
			List_1_max = List_1.front();
		}
		List_1.pop_front();
	}

	cout << "301290044 gss28 Gurkanwar Sidhu" << endl;
	cout << List_1_max << endl;
			
 return 0;
 }

