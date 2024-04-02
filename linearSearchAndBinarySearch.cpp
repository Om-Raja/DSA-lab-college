#include <iostream>
using namespace std;

const int MAX = 10;

class searching{
    public:
    void linearSearch(int arr[], int element)
    {
        for(int i = 0; i < MAX; i++)
        {
            if(arr[i] == element)
            {
                cout << "The element is found at index = " << i << endl;
            }
        }
        cout << "The element is not found in the list." << endl;
    }

    int binarySearch(int arr[], int element)
    {
        int low, high, mid;
        mid = (low + high) / 2;
        while(low <= high)
        {
            if(arr[mid] == element)
            {
                return mid;
            }
            else if(arr[mid] < element)
            {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
    }

};

int main()
{
    searching search;
    int arr[MAX];
    int sizeOfArray;
    cout << "Enter size of array[Max size = 10]" << endl;
    cin >> sizeOfArray;
    int temp;
    cout << "Enter elements of array. \nNote: Insert element in sorted form for binary search." << endl;
    
    for(int i = 0; i < sizeOfArray; i++)
    {   
        cin >> temp;
        arr[i] = temp;
        cout << temp << " added to the array." << endl;
    }

    while(true)
    {
        int choice, element;
        cout << "Enter the element you want to search: ";
        cin >> element;
        cout << "\nChoose the search method. " << endl;
        cout << "1. Linear search. \n2. Binary serach \n3. Exit" << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:
                search.linearSearch( arr, element);
                break;
            case 2:
                search.binarySearch( arr, element);
                break;
            case 3:
                cout << "Exited";
                return 0;
            default: 
                cout << "Invalid choice, please select a valid choice. " << endl;
        }
    }
    
    return 0;
}