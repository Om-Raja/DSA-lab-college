#include<iostream>
using namespace std;

void display(int arr[], int n)
{

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insert(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr[i] = element;
    }
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = a;
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    
    int arr[n];
    insert(arr, n);
    display(arr, n);

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr [i])
            {
                swap(arr[j], arr[i]);
            }
            cout << "after " << i + 1 << " pass : ";
            display(arr , n);
            cout << endl;
            

        }
    }

    

}
