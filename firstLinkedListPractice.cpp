#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
};

int main()
{
    Node* head; // creating a head pointer which will point to the first node
    head = new Node; // allocating memory to the head pointer (ptr = new data_type)
    head -> data = 56;
    cout << "The data at first node is " << head->data << endl;
    
    //creating more nodes
    Node* two;
    Node* three;
    
    // allocating memory to new nodes
    two = new Node;
    three = new Node;
    
    // connecting all the nodes in circle
    head -> link = two;
    two -> link = three;
    three -> link = head;
    
    (head -> link) -> data = 34;
    cout << "data at second node is " << two -> data;
    
    
    
    return 0;
}
