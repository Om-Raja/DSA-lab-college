#include<iostream>
#include<cstdlib>
using namespace std;
//Practical 2 - Stack using Array
class stack {
    public:
    int MAX = 100;
    int array[MAX];
    int header = -1;

    void push()
    {
        if (header == MAX)
        {
            cout << "Overflow";
        }
        else {
            int newElement;
            cout << "Enter the new element : ";
            cin >> newElement;
            array[++header] = newElement;
        }
    }

    void pop(){
        if(header == -1)
        {
            cout << "underflow";
        }
        else{
            header--;
        }
    }

    void show()
    {
        for (int i = 0; i <= header ; i++)
        {
            cout << array[i] << " ";
        }
    }

    void checkPalindrome()
    {
        char string1[MAX];
        int sizeOfString;
        cout << "Enter the size of string";
        cin >> sizeOfString;
        pointer = 0;
        char newChar;
        cout << "Enter the character by sequence, press ENTER after every character : ";
        for(int i = 0; i < sizeOfString; i++)
        {
            cin >> newChar;
            string1[pointer] = newChar;
            pointer++;
        }

        char string2[sizeOfString];
        for(int i = 0; i <= sizeOfString; i++)
        {
            string2[i] = string1[pointer];
            pointer--;
        }
        if(string1 === string2)
            cout << "It's a Palindrome.";
        else
            cout << "It's not a palindrome.";

    }

};

int main()
{
    while(true){
        cout << "Choose the operation : \n";
        cout << "1. Push \n2. Pop \n3. Show \n4. Check Palindrome \n5. Exit";
        int option;
        cin >> option;
        switch(option)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4: 
                checkPalindrome();
            case 5: 
                exit(0);

        }
        
    }
}