#include <iostream>
#include <cstdlib> // used for exit(0);
using namespace std;
int main()
{

    int arr[50];
    int size;
    // initializing array
    cout << "Enter the size of array, [Max size = 50] : ";
    cin >> size ;
    for (int i = 0; i < size; i++)
    {   cout << "Enter " << i << "th element : ";
        cin >> arr[i];
    }
    cout << "The array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]  << " ";
    }

 // array operations
 while(true)
 {
 
    int key;
    cout << "\nChoose the key for operation \n";
    cout << "1 for insertion. \n2 for deletion. \n3 for exit. \n";
    cin >> key;
    


    switch(key)
    {
        case 1:
        {
            int index, newElement;
            cout << "At which index you want to insert [Max. index = 50] ";
            cin >> index;
            cout << "Enter the element you want to insert : ";
            cin >> newElement;
            for (int i = size; i >= index; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[index] = newElement;

            cout << "insertion completed successfully. \nThe new array is ";
            for (int i = 0; i <= size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
            size += 1;
            break;
        }
        case 2:
        {
            int index; // index variable of another case will not affect this
            cout << "Enter the index of the element you want to remove : ";
            cin >> index;
            for (int i = index; i < size; i++ )
            {
                arr[i] = arr[i + 1];
            }
            for (int i = 0; i < size - 1; i++)
            {
                cout << arr[i] << " ";
            }
            break;
        }
        case 3:
        {
            exit(0);
        }
    }
 }
 cout << "exited successfully";
}
