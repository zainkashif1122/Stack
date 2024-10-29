#include <iostream>
using namespace std;

template <class T>
class Stack
{
protected:
	T* stackArray;
	int stackTop;
	int maxSize;

public:
	Stack(int s);
	virtual ~Stack();

	virtual bool isEmpty() = 0;
	virtual bool isFull() = 0;
	virtual void push(T value) = 0;
	virtual T pop() = 0;
	virtual T view() = 0;
	virtual void display() = 0;

};

template<class T>
Stack<T>::Stack(int s)
{
	maxSize = s;
	stackTop = -1;
	stackArray = new T[maxSize];
}

template<class T>
Stack<T>::~Stack()
{
	delete[]stackArray;
}