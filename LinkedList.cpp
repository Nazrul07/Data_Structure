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
            return;
        }
        Node *temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=New;
    }
    void Insert_AtAnyPosition(int ITEM,int POS)
    {
        Node *New=new Node(ITEM);
        if(head==NULL && POS==1)
        {
            head=New;
        }
        else if(POS==1)
        {
            New->link=head;
            head=New;
        }
        else
        {
            int Size=0;
            Node *temp=head;
            while(temp!=NULL)
            {
                Size++;
                temp=temp->link;
            }
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
    void Delete_AtAnyPosition(int pos)
    {
        if(head==NULL)
        {
            cout<<"List is empty"<<endl;
            return;
        }
        if(pos==1)
        {
            head=head->link;
        }
        else
        {
            int Size=0;
            Node *temp=head;
            while(temp!=NULL)
            {
                Size++;
                temp=temp->link;
            }
            if(Size<pos)
            {
                cout<<"Invalid Position"<<endl;
                return;
            }
            temp=head;
            for(int i=2 ; i<pos ; i++)
            {
                temp=temp->link;
            }
            Node *temp1=temp->link;
            temp->link=temp1->link;
            delete temp1;
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
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
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
    obj.Insert_AtAnyPosition(22,3);
    obj.Print();
    obj.Delete_AtAnyPosition(3);
    obj.Print();
    obj.Delete_AtAnyPosition(2);
    obj.Print();
    return 0;
}

