#include<bits/stdc++.h>
using namespace std;
class LinkedList
{
public:
    struct Node
    {
        int data;
        Node *link;
        Node(int ITEM)
        {
            data=ITEM;
            link=NULL;
        }
    };
    Node *head=NULL;
    void Insert(int ITEM)
    {
        Node *New=new Node(ITEM);
        if(head==NULL)
        {
            head=New;
            New->link=head;
            return;
        }
        Node *temp=head;
        while(temp->link!=head)
        {
            temp=temp->link;
        }
        temp->link=New;
        New->link=head;
    }
    void Insert_AtAnyPosition(int ITEM,int POS)
    {
        Node *New=new Node(ITEM);
        if(head==NULL && POS==1)
        {
            head=New;
            New->link=head;
        }
        else if(POS==1)
        {
            Node *temp=head;
            do
            {
                temp=temp->link;
            }while(temp->link!=head);
            temp->link=New;
            New->link=head;
            head=New;
        }
        else
        {
            int Size=0;
            Node *temp=head;
            do
            {
                Size++;
                temp=temp->link;
            }while(temp->link!=head);
            if(Size<POS)
            {
                cout<<"Invalid Position"<<endl;
                return;
            }
            temp=head;
            for(int i=2 ; i<POS ; i++)
            {
                temp=temp->link;
            }
            New->link=temp->link;
            temp->link=New;
        }
    }

    void Print()
    {
        Node *temp=head;
        if(temp==NULL)
        {
            cout<<"Empty"<<endl;
            return;
        }
        do
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }while(temp!=head);
        cout<<endl;
    }
};

int main()
{
    LinkedList obj;
    obj.Insert(10);
    obj.Insert(25);
    obj.Insert(9);
    obj.Insert(11);
    obj.Insert(24);
    obj.Print();
    obj.Insert_AtAnyPosition(22,3);
    obj.Print();
    return 0;
}
