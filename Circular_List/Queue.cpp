#include <iostream>
using namespace std;
#include "Queue.h"

 Queue::Queue(){
	myBack = 0;
	mySize = 0;
 }
ElementType Queue::back(){
	return myBack->data;
}
ElementType Queue::nthElement(int a){
	NodePointer ptr, predPtr;
	ptr = myBack->next;
	int Size=0;
	if(a<= mySize&& a>=0){
		while(Size != a){
			predPtr = ptr;
			ptr=ptr->next;
			delete predPtr;
			Size++;
			mySize--;
		}
		return ptr->data;
	}
		
	else
	{
		cerr<< "not in list";
		
	}
}
ElementType Queue::GetnthElement(int a){
	NodePointer ptr, predPtr;
	ptr = myBack->next;
	int Size=0;
	if(a<= mySize&& a>=0){
		while(Size != a){
			ptr=ptr->next;
			Size--;
		}
		return ptr->data;
	}
		
	else
	{
		cerr<< "not in list";
		
	}
}

bool Queue::empty(){
	if(mySize==0){
		return true;
	}
	else 
		return false;
}

void Queue::enqueue(ElementType newData){
	NodePointer ptr= myBack->next;
	NodePointer newPtr= new Node(newData);
	myBack->next = newPtr;
	newPtr->next = ptr;

}

ElementType Queue::front(){
	return myBack->next->data;
}

void Queue::dequeue(){
	NodePointer ptr= myBack->next;
	myBack->next = myBack->next->next;
	delete ptr;
}


void Queue::display(ostream & out){
	NodePointer ptr;
	ptr = myBack->next;
	int Size = mySize;
	while(Size != 0){
		
		cout << "["<<ptr->data<<"]";
		ptr=ptr->next;
		Size--;
	}
}

Queue::Node::Node(ElementType d){
	data = d;
}