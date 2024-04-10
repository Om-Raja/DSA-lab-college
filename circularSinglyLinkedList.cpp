#include<iostream>
using namespace std;

class node{
    public:
    int x, y, z;
    node * link;
};

int main()
{
    // creating three node pointers
    node* polly1;
    node* polly2;
    node* pollySum;
    
    
    // allocating memory to the pointers
    polly1 = new node;
    polly2 = new node;
    pollySum = new node;
    
    // assigning values to polly1
    polly1 -> x = 2;
    polly1 -> y = 3;
    polly1 -> z = 4;
    
    // assigning values to polly2
    polly2 -> x = 5;
    polly2 -> y = 6;
    polly2 -> z = 7;
    
    // assigning values to pollySum
    pollySum -> x = (polly1 -> x) + (polly2 -> x);
    pollySum -> y = (polly1 -> y) + (polly2 -> y);
    pollySum -> z = (polly1 -> z) + (polly2 -> z);
    
    // connecting all the node in circular linked list
    polly1 -> link = polly2;
    polly2 -> link = pollySum;
    pollySum -> link = polly1;
    
    // creating a head pointer which points to the first node now
    node* head;
    head = new node;
    head -> link = polly1;
    
    
    
    return 0;
}
