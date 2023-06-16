#include<bits/stdc++.h>
using namespace std;
class DoubleWay_LinkedList
{
    struct Node
    {
        int data;
        Node *pre;
        Node *next;
        Node(int ITEM)
        {
            pre=next=NULL;
            data=ITEM;
        }
    };
    Node *head=NULL;
    Node *PRE;
public:
    void Insert(int ITEM)
    {
        Node *New=new Node(ITEM);
        if(head==NULL)
        {
            head=New;
            PRE=head;
            return;
        }
        New->pre=PRE;
        Node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=New;
        PRE=PRE->next;
    }
    void Print()
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }
};
int main()
{
    DoubleWay_LinkedList obj;
    obj.Insert(19);
    obj.Insert(28);
    obj.Insert(21);
    obj.Insert(25);
    obj.Insert(15);
    obj.Print();
    return 0;
}
