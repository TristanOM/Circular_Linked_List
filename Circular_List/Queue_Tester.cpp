#include <iostream>
using namespace std;

#include "Queue.h"

int main()
{
	//Test Constructor
	Queue List;

	//Test back() Method excercise 5
	ElementType back();


	//Test empty
	cout <<"Is list empty? "<< List.empty() << endl;

	//Test enqueue
	int intTest = 1;
	List.enqueue(intTest);
	List.enqueue(intTest+1);
	List.enqueue(intTest+1);
	List.enqueue(intTest+1);
	List.enqueue(intTest+1);
	List.enqueue(intTest+1);

	//Test display
	cout << List<< endl;

	//Test empty
	cout <<"Is list empty? "<< List.empty() << endl<< endl;

	//Test get front
	cout <<"Front of list "<< List.front()<< endl;

	//Test dequeue
	List.dequeue();
	cout <<"test dequeue "<< List.front()<< endl;

	//Test nthElement excercise 7 that only gets the nth element
	cout <<"Get 3rd Element "<< List.GetnthElement(3)<< endl;
	cout << List<< endl;

	//Test nthElement excercise 6 that deletes all elements before it
	cout <<"Get 4th Element and delete everything before it "<< List.nthElement(4)<< endl;
	cout << List<< endl;

	char aChar;
	cin >> aChar;
	return 0;
}