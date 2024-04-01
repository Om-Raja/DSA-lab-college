//Practical 2 - Stack using Array
class stackk {
    public:
    int array[MAX];
    int MAX = 100;
    int header = -1;

    void push(int newElement)
    {
        if (header == MAX)
        {
            cout << "Overflow";
        }
        else {
            array[++header] = newElement;
        }
    }

    void pop(){
        if(header == -1)
        {
            cout << "underflow";
        }
        else{
            header--;
        }
    }

    void show()
    {
        for (int i = 0; i <= header ; i++)
        {
            cout << array[i] << " ";
        }
    }

};

int main()
{
    while(true){
        cout << "Choose the operation : \n";
        cout << "1. Push \n"
    }
}