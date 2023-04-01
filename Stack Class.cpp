// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

template <class X>
class Stack
{
    X arr[100];
    int t,Max_size=50;
    public:
    Stack()
    {
        t=0;
    }
    void push(X x)
    {
        if(t==Max_size)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            arr[t++]=x;
        }
    }
    void pop()
    {
        if(t==0)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else t--;
    }
    X top()
    {
        return arr[t];
    }
    void display()
    {
        cout<<"Stack elements"<<endl;
        for(int i=t-1 ; i>=0 ; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int Size()
    {
        return t;
    }
};
int main() {
    // Write C++ code here
    Stack<int> s1,s2;
    s1.push(5);
    s1.push(9);
    s2.push(7);
    s2.push(5);
    s1.push(10);
    s2.push(11);
    s1.pop();
    s2.pop();
    cout<<s1.Size()<<endl;
    cout<<s2.Size()<<endl;
    s1.display();
    s2.display();
    return 0;
}
