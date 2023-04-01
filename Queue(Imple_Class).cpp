// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int arr[100],Max=100,r=0,l=0;
public:
    void Push(int x)
    {
        if(r==Max)
        {
            cout<<"Queue Overflow"<<endl;
        }
        arr[r]=x;
        r++;
    }
    void Pop()
    {
        if(l>=r)
        {
            cout<<"Queue Underflow"<<endl;
        }
        else l++;
    }
    void Top()
    {
        cout<<"Top: "<<arr[r-1]<<endl;
    }
    void Print()
    {
        cout<<"Printing Queue"<<endl;
        for(int i=l ; i<r ; i++)
        {
            cout<<arr[i]<<" "<<endl;
        }cout<<endl;
    }
};
int main() {
    Queue Obj;
    Obj.Push(4);
    Obj.Push(8);
    Obj.Push(7);
    Obj.Push(11);
    Obj.Pop();
    Obj.Top();
    Obj.Push(5);
    Obj.Pop();
    Obj.Print();
    return 0;
}
