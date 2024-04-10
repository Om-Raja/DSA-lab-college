// Bubble sort
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int array[size];
    cout << "Enter elements, seperated by space or enter : " << endl;
    // creating unsorted array: 
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    
    // bubble sorting
    int counter = 1;
    while(counter < size)
    {
        for(int i = 0; i < size -1; i++)
        {
            if(array[i] > array[i + 1])
            {
                int temp;
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        counter++;
    }
    
    // printing sorted array:
    cout << "Sorted array is : ";
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}
