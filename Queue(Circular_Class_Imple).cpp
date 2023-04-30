#include<bits/stdc++.h>
using namespace std;
class Queue
{
    int arr[6],Max=5,Rear=0,Front=0;
public:
    void enqueue(int item)
    {
        if( (Front==1 && Rear==Max) || (Front==Rear+1) )
        {
            cout<<"Queue is overflow"<<endl;
            return;
        }
        else if(Rear==0)
        {
            Rear=Front=1;
        }
        else
        {
            if(Rear==Max)
            {
                Rear=1;
            }
            else
            {
                Rear++;
            }
        }
        arr[Rear]=item;
    }
    void dequeue()
    {
        int ITEM;
        if(Front==-1)
        {
            cout<<"Under Flow"<<endl;
            return;
        }
        ITEM=arr[Front];
        if(Front==Rear)
        {
            Front=Rear=0;
        }
        else if(Front==Max)
        {
            Front=1;
        }
        else
        {
            Front++;
        }
    }
    void print()
    {
        if(Front==-1)
        {
            cout<<"Queue is empty"<<endl;
        }
        else if(Front<=Rear)
        {
            for(int i=Front ; i<=Rear ; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
        else
        {
            for(int i=Front ; i<=Max ; i++)
            {
                cout<<arr[i]<<" ";
            }
            for(int i=1 ; i<=Rear ; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
    }
};
int main()
{
    Queue obj;
    obj.enqueue(5);
    obj.enqueue(10);
    obj.enqueue(15);
    obj.enqueue(11);
    obj.enqueue(7);
    //obj.enqueue(2);
    obj.print();
    obj.dequeue();
    obj.dequeue();
    obj.enqueue(3);
    obj.enqueue(13);
    obj.print();
    return 0;
}
