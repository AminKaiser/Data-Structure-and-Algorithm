#include<iostream>
#define Max 10
using namespace std;

class Stack
{
    int top;
    int a[Max];
public:
    Stack();
    void push(int item);
    int pop();
    bool isFull();
    bool isEmpty();
    void display();
};
Stack::Stack()
{
    top = -1; //Initializing the stack
}
bool Stack::isFull()
{
    if(top == Max-1) //Checking stack is full or not
    {
        return true;
    }
    else
        return false;
}
bool Stack::isEmpty()
{
    if(top == -1) //Checking the stack is empty or not
    {
        return true;
    }
    else
        return false;
}

void Stack::push(int item)
{
    if(isFull())
    {
        cout<<"Stack is Full \n";
        return;
    }
    else
    {
        top++;
        a[top] = item;
    }
}
int Stack::pop()
{
    if(isEmpty())
    {
        cout<<"Stack is Empty";
    }
    else
    {
        int x = a[top--];
        cout<<x<<" pop from Stack"<<endl;
    }
}
void Stack::display()
{
    cout<<"Item in Stack : ";
    for(int i=top;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    Stack s;
    s.push(10);
    s.push(12);
    s.push(30);
    s.push(40);
    s.pop();
    s.display();
    return 0;
}
