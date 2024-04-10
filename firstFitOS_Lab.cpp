#include <iostream>
using namespace std;

// first fit function:
void firstFit(int blockSize[], int processSize[], int m, int n)
{
    int allocation[n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            allocation[i] = -1;
            if(blockSize[j] >= processSize[i])
            {
                allocation[i] = j;
                blockSize[j] -= processSize[i];
                break;
            }
        }
    }
    
    cout << "Process no. \t Process size \t block NO. \n";
    for(int i = 0; i < n; i++)
    {
     cout << endl << i + 1 << "\t\t\t\t\t" << processSize[i] << "\t\t\t\t";
     if(allocation[i] != -1)
        cout << allocation[i] + 1;
     else
        cout << "Not allocated";
    }
}
int main()
{
    cout << "Name : Om Raja \nURN: 2203743 \nCRN: 2215197" << endl;
    int processSize[] = {200, 300, 458, 124, 257};
    int blockSize[] = {100, 400, 214, 47, 365, 215};
    int m = sizeof(blockSize) / sizeof(blockSize[0]);//  no. of blocks
    int n = sizeof(processSize) / sizeof(processSize[0]); // no. of processes
    
    firstFit(blockSize, processSize, m , n);
    
   
    
}
