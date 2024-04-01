#include <iostream>
using namespace std;

int const MAX = 10;

class Stack{
    private:
        int stack[MAX];
        int top = -1;
        
    public:
        bool isFull()
        {
            return top == MAX - 1;
        }

        bool isEmpty()
        {
            return top == -1;
        }

        void push(int element)
        {
            if(isFull())
            {
                cout << "Overflow, Can't push the stack";
            }
            else
            {
                stack[++top] = element;
                cout << "Pushed " << element << " to the stack successfully.";
            }
        }

        void pop()
        {
            if(isEmpty())
            {
                cout << "Underflow, Stack is already empty.";
            }
            else{
                int poppedElement = stack[top--];
                cout << "Popped successfully." << endl;
            }
        }

        void displayStack()
        {
            for(int i = 0; i <= top; i++)
            {
                cout << stack[i] << " ";
            }
        }

        bool checkPalindrome()
        {
            int i = 0, j = top;
            while(i < j)
            {
                if (stack[i++] != stack[j--])
                {
                    return false;
                }
            }
            return true;
        }
};

int main()
{
    Stack stack;
    while(true){
        int option;
        cout << "Choose an option : " << endl;
        cout << "1. Push to stack" << endl;
        cout << "2. Pop to stack" << endl;
        cout << "3. Check Palindrome" << endl;
        cout << "4. display the stack" << endl;
        cout << "5. Exit" << endl;
        cin >> option;

        switch(option)
        {
            case 1: 
                int element;
                cout << "Enter the element you wish to push : ";
                cin >> element;
                stack.push(element);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                if(stack.checkPalindrome())
                {
                    cout << "The elements of stack form a palindrome." << endl;
                }
                else{
                    cout << "The element of stack do not form a palindrome." << endl;
                }
                break;
            case 4:
                stack.displayStack();
                break;
            case 5:
                cout << "Exited" << endl;
                return 0;
        }
    }
    return 0;
}