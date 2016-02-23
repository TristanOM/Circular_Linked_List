#ifndef LINKEDLIST
#define LINKEDLIST

#include <iostream>
#include <new>
using namespace std;

typedef int ElementType;
class Queue
{
 public:
	 Queue();

	 ElementType back();
	 ElementType nthElement(int a);
	 ElementType GetnthElement(int a);

	 bool empty();
	 void enqueue(ElementType newPtr);
	 ElementType front();
	 void dequeue();

	 void display(ostream & out);

private:
  class Node
  {
    public:
		
		ElementType data;
		Node* next;

     
		Node(ElementType);

   }; 

   typedef Node* NodePointer;
   
   NodePointer myBack;
   int mySize;
   
}; 


ostream & operator<<(ostream & out, Queue & ListVal);

#endif