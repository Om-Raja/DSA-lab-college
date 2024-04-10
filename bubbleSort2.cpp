#include<iostream>
using namespace std;
int const MAX = 10;
class bubbleSort{
    private: 
    int array[MAX];
    int temp;
    int size;

    public: 
    void insert()
    {
        cout << "Enter the size of array (Max size = 10) : ";
        cin >> size;
        for(int i = 0; i < size; i++)
        {
            cin >> temp;
            array[i] = temp;
        }
        cout << "Insertion done." << endl;
    }

    void show(){
        for(int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        
    }

    void bubbleSorting()
    {
        int counter = 1;
        while(counter < size){
            for(int i = 0; i < size - counter; i++)
            {
                if (array[i] > array[i + 1])
                {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                }
            }
            cout << "\nPass no = " << counter << endl;
            show();
            cout << endl;
            counter++;
        }
        cout << "\nSorting done." << endl;
    }
};
int main()
{
    bubbleSort sort;
    while(true)
    {
        int key;
        cout << "Choose an option: " << endl;
        cout << "1. Create an array. " << endl;
        cout << "2. Display the array." << endl;
        cout << "3. Sort the array using bubble sort." << endl;
        cout << "4. Exit " << endl;
        cin >> key;

        switch(key){
            case 1: 
                sort.insert();
                break;
            case 2:
                sort.show();
                break;
            case 3: 
                sort.bubbleSorting();
                break;
            case 4:
                cout << "Exiting the program";
                return 0;
            default: 
                cout << "Invalid option, try again" << endl;
        }
    }
    return 0;
}
