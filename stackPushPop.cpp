#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;
void pushToStack(int);
int main()
{
    stack <int> s;
    while(true)
    {
        int key;
        cout << "\nChoose a operation\n";
        cout << "\n1. Push \n2. Pop \n3. Show \n4. End\n";
        cin >> key;
        
        switch(key){
            case 1: 
                    int x;
                    cout << "Enter the number to push : " ;
                    cin >> x;
                    s.push(x);
                    cout << "push operation done \n";
                    break;
            case 2: 
                    s.pop();
                    cout << "pop operation done. \n";
                    break;
            case 3:
                    cout << "The stack is : ";
                    while(!s.empty())
                    {
                        cout << s.top() << " ";
                        s.pop();
                    }
                    break;
            case 4:
                exit(0);
            default:
                    cout << "Inavalid input. Try again \n";
        }
    }
}
