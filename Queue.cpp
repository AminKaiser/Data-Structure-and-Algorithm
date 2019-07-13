#include<iostream>
#define Max 10
using namespace std;

class Queue
{
    int Front, Rear,Q[Max];
public:
    Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int n);
    int dequeue();
    void display();



};
Queue::Queue()
{
    Front = -1;
    Rear = -1;
}
bool Queue::isFull()
{
    if(Rear == Max-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Queue::isEmpty()
{
    if(Front == -1 && Rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

void Queue::enqueue(int n)
{
    if(isFull())
    {
        cout<<"Queue is Full ";
        return ;
    }
    else if (Rear == -1)
    {
        Front = Rear = 0;
        Q[Rear]=n;
    }
    else
    {
        Rear = Rear + 1;
        Q[Rear] = n;
    }
}


 int Queue::dequeue()
 {
     if(isEmpty())
     {
         cout<<"Queue is Empty ";
         return 0;
     }
     else if (Front == Rear)
     {
         Front = Rear = -1;
     }
     else
     {
         cout<<"\nElement Deleted from Queue is "<<Q[Front]<<endl;
         Front= Front + 1;
     }
 }
 void Queue::display()
 {
     if (Front == - 1)
     {
         cout<<"Queue is empty"<<endl;
     }
      else
      {
       cout<<"Queue Elements are: ";
         for(int i = Front; i <= Rear; i++)
         {
             cout<<Q[i]<<" ";
         }
      }

 }

 int main()
 {
     Queue obj;
     obj.enqueue(10);
     obj.enqueue(20);
     obj.enqueue(30);
     obj.display();
     obj.dequeue();
     obj.display();
 }
