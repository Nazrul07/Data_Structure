#include <bits/stdc++.h>
using namespace std;
string s1[1000],s2[1000];
int top1=0,top2=0;
void Push(string s[],string ss,int &top)
{
    top++;
    s[top]=ss;
}
void Pop(string s[],int &top)
{
    top--;
}
string Top(string s[],int &top)
{
    return s[top];
}
int Size(string s[],int &top)
{
    return top;
}
int main() {
    Push(s1,"Bangladesh",top1);
    Push(s2,"Nepal",top2);
    Push(s1,"India",top1);
    Push(s2,"SriLanka",top2);
cout<<"Top of s1: "<<Top(s1,top1)<<endl;
cout<<"Top of s2: "<<Top(s2,top2)<<endl;
cout<<"Size of s1: "<<Size(s1,top1)<<endl;
cout<<"Size of s2: "<<Size(s2,top2)<<endl;
    Pop(s1,top1);
    Pop(s2,top2);
cout<<"Top of s1: "<<Top(s1,top1)<<endl;
cout<<"Top of s2: "<<Top(s2,top2)<<endl;
cout<<"Size of s1: "<<Size(s1,top1)<<endl;
cout<<"Size of s2: "<<Size(s2,top2)<<endl;
    return 0;
}
