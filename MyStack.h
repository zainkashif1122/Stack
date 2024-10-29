#include "Stack.h"

template<class T>
class MyStack : public Stack<T>
{
public:
	MyStack(int s);

	bool isEmpty();
	bool isFull();
	void push(T value);
	T pop();
	T view();
	void display();
};

template<class T>
MyStack<T>::MyStack(int s):Stack<T>(s){}

template<class T>
bool MyStack<T>::isEmpty()
{
	return this->stackTop == -1;
}

template<class T>
bool MyStack<T>::isFull()
{
	return this->stackTop == this->maxSize - 1;
}

template<class T>
void MyStack<T>::push(T value)
{
	if (isFull())
	{
		cout << "Stack is full!!!" << endl;
	}
	else
	{
		this->stackArray[++this->stackTop] = value;
	}
}

template<class T>
T MyStack<T>::pop()
{
	if (isEmpty())
	{
		cout << "Stack is empty!!!" << endl;
		return T();
	}
	else
	{
		return this->stackArray[this->stackTop--];
	}
}

template<class T>
T MyStack<T>::view()
{
	return this->stackArray[this->stackTop];
}

template<class T>
void MyStack<T>::display()
{
	cout << "Stack:" << endl;
	for (int i = 0; i <= this->stackTop; i++)
	{
		cout << this->stackArray[i] << " ";
	}
	cout << endl;
}
