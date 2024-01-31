#include <iostream>
using namespace std;
int main()
{
    // queue using array :
    int size;
    cout << "Enter the initial size of the queue [MAX : 15]: ";
    cin >> size;
    int queue[15];

    // initialising queue :
    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "Enter element : ";
        cin >> element;
        queue[i] = element;
    }

    // queue operation using array :
    while (1)
    {
        int key;
        cout << "Choose the operation : \n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit" << endl;
        cin >> key;
        switch (key)
        {
        case 1:
        {
            cout << "Enter the value to add : ";
            int value;
            cin >> value;
            queue[size] = value;
            size += 1;
            break;
        }

        case 2:
        {
            for (int i = 1; i < size; i++)
            {
                queue[i - 1] = queue[i];
            }
            size -= 1;
        }
        cout << "Dequeue operation is done. ";
        break;

        case 3: 
        {
            cout << "The queue is : [";
            for (int i = 0; i < size; i++)
            {
                cout << queue[i] << " ";
            }
            cout << "]";
        }
        break;

        case 4:
        {
            exit(0);
        }

        default: 
        cout << "Invalid choice, try again \n";

        }
    }
}
