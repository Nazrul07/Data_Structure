#include<bits/stdc++.h>
using namespace std;
string arr[100000];
int Top=-1;
void push(string s[],string ss,int &n)
{
    n++;
    s[n]=ss;
}
void pop(string s[],int &n)
{
    n--;
}
void top(string s[],int &n)
{
    if(n==-1 || n==0)
    {
        cout<<"Home Page"<<endl;
    }
    else
        cout<<"Your current page: "<<s[n]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            string s;
            cin>>s;
            push(arr,s,Top);
        }
        else if(a==2)
        {
            pop(arr,Top);
        }
        else if(a==3)
        {
            Top++;
        }
        else
        {
            top(arr,Top);
        }
    }
    return 0;
}

