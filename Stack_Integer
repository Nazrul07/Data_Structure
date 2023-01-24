#include<bits/stdc++.h>
using namespace std;
/// push(arr, x)
/// pop(arr)
/// top(arr)
/// size(arr)
 
int st1[1000], top1 = 0;
int st2[1000], top2 = 0;
void push(int arr[], int x, int &t)
{
    t++;
    arr[t] = x;
}
void pop(int arr[], int &top)
{
    top--;
}
int Size(int arr[], int &top)
{
    return top;
}
int Top(int arr[], int &top)
{
    return arr[top];
}
 
int main()
{
    push(st1, 5, top1);
    push(st2, 3, top2);
    push(st1, 1, top1);
    cout << Size(st1, top1) << endl;
    cout << Top(st2, top2) << endl;
 
    return 0;
}
