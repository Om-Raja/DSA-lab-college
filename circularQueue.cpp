#include <iostream>
using namespace std ;

const int MAX = 5;

class circularQueue{
    private:
     int front, rear;
     int queue[MAX];
     
    public:
    circularQueue()
    {
        front = rear = -1;
    }

    bool isFull()
    {
        return (rear + 1) % MAX == front ;
    }

    bool isEmpty(){
        return (front == -1) && (rear == -1);
    }

    void insert(int element){
        if(isFull())
        {
            cout << "Overflow! Can not insert into circular queue." << endl;
            return;            
        }
        else if(isEmpty())
        {
            rear = fornt = 0;

        }
        else{
            rear = (rear + 1) % MAX;
        }
        queue[rear] = element;
        cout << element << " pushed to the queue. " << endl;        
    }

    void remove(){
        if(isEmpty()){
            cout << "The queue is already empty. " << endl;
            return;
        }
        else if(front == rear)
        {
            front -1;
            rear = -1;
        }
        else{
            int removedElement = queue[front++]
        }
        cout << "Removed " << endl;
    }

    void dispalyStatus()
    {
        if(isFull())
        {
            cout << "The queue is completely full \n";
        }
        else if(isEmpty())
        {
            cout << "The queue if empty \n";
        }
        else{
            cout << "The queue has some elements , it's not completely filled. \n";
        }
    }

    void displayQueue()
    {
        for(int i = 0; i <= rear; i++ )
        {
            cout << queue[i] << " ";
        }
    }

};
int main()
{
    circularQueue queue;
    while(true)
    {
        int choice;
        cout << "Choose an option : " << endl;
        cout << "1. Insert an element. " << endl;
        cout << "2. Remove an element." << endl;
        cout << "3. display status of queue" << endl;
        cout << "4. display queue" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        switch(choice)
        {
            case 1:
                int temp;
                cout << "Enter the element you want to enter: ";
                cin >> temp;
                queue.insert(temp);
                break;
            
            case 2: 
                queue.remove();
                break;
            case 3:
                queue.dispalyStatus();
                break;
            case 4:
                queue.displayQueue();
                break;
            case 5:
                cout << "Exited";
                return 0;
            default: 
                cout << "Invalid choice, please choose again." << endl;
        }
    }
    return 0;
    
}
