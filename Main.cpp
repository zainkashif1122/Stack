#include "MyStack.h"
#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter stack size: ";
	cin >> size;

	MyStack<int> stack(size);
	int choice, value;

	do {
		cout << "\nStack Menu\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. View Top\n";
		cout << "4. Display Stack\n";
		cout << "5. Exit\n";
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter a value to push: ";
			cin >> value;
			stack.push(value);
			break;
		case 2:
			cout << "Popped value: " << stack.pop() << endl;
			break;
		case 3:
			if (!stack.isEmpty())
				cout << "Top element is: " << stack.view() << endl;
			else
				cout << "Stack is empty!" << endl;
			break;
		case 4:
			stack.display();
			break;
		case 5:
			cout << "Exiting...\n";
			break;
		default:
			cout << "Invalid choice! Please try again.\n";
		}
	} while (choice != 5);

	return 0;
}