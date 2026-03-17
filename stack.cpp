#include<iostream>
using namespace std;

class stack 
{
	private: 
		int Stack[50];
		int MaxCapacity;
		int top;
	public:
		stack()
		{
			MaxCapacity=50;
			top=-1;
		}
		int getTop();
		int pop();
		void push(int value);
		int empty();
		int CurrentSize();
		int IsFull();
};

int stack :: empty() {
	if (top==1){
		return 1;
	}	
	else {
		return 0;
	}	
}							

int stack :: IsFull() {
	if(top==MaxCapacity-1)
		return 1;
	else
		return 0;
}

int stack :: pop() {
	if(!empty()) {
		return Stack[top--];
	}	
	else {
        cout << "Stack is empty." << endl;
        return -1;
    }
}


void stack :: push(int value) {
	if(!IsFull()) {
		Stack[++top]=value;
		cout << value << " pushed onto stack." << endl;
    	} 
    	else {
        cout << "Stack is full." << endl;
	}
}

int stack ::getTop() {
	if(!empty()){
		return Stack[top];
	} 
	else {
        cout << "Stack is empty." << endl;
        return -1;
    	}
}

int stack :: CurrentSize() {
	return(top+1);
}

 
int main() {
    stack obj;
    int choice, value;

    do {
        cout << "\nStack Operations Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Get Top" << endl;
        cout << "4. Current Size" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                obj.push(value);
                break;
            case 2:
                value = obj.pop();
                if (value != -1) {
                    cout << "Popped element: " << value << endl;
                }
                break;
            case 3:
                value = obj.getTop();
                if (value != -1) {
                    cout << "Top element: " << value << endl;
                }
                break;
            case 4:
                cout << "Current size: " << obj.CurrentSize() << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

