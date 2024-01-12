// linear search in array
#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        return i;
    }
    return -1;
}
int main()
{
    int x;
    int arr[] = {32, 344, 54, 55, 64, 63, 765};
    int n = sizeof(arr) / sizeof(arr[0]); // length of array
    cout << "Enter the element you want to search : ";
    cin >> x;
    
    int result = search(arr, n, x);
    if (result == -1)
    {
        cout << "The given number is not present in array";
    }
    else{
        cout << "The given element is present at index " << result;
    }

    return 0;
}
