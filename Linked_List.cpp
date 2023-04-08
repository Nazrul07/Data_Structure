#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *link;
    Node(int x)
    {
        this->data=x;
        this->link=NULL;
    }
};
class Linked_List
{
    Node *Head;
public:
    Linked_List()
    {
        Head=NULL;
    }
    void Insert(int x)
    {
        Node *newNode=new Node(x);
        if(Head==NULL)
        {
            Head=newNode;
            return;
        }
        Node *temp=Head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newNode;
    }
    void Print()
    {
        Node *temp=Head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
        cout<<endl;
    }
    void Delete(int Position)
    {
        Node *temp1=Head,*temp2=NULL,*temp3;
        int ListLenght=0;
        if(Head==NULL)
        {
            cout<<"List is empty"<<endl;
            return;
        }
        while(temp1!=NULL)
        {
            temp1=temp1->link;
            ListLenght++;
        }
        if(ListLenght<Position)
        {
            cout<<"Invalid Position"<<endl;
            return;
        }
        temp1=Head;
        if(Position==1)
        {
            Head=Head->link;
            delete temp1;
            return;
        }
        while(Position-- >2)
        {
            temp1=temp1->link;
        }
        temp3=temp1;
        temp3=temp3->link;
        temp1->link=temp3->link;
        delete temp3;
    }
};
int main()
{
    Linked_List li;
    li.Insert(5);
    li.Insert(7);
    li.Insert(9);
    li.Insert(11);
    li.Print();
    li.Delete(3); ///Position
    li.Print();
    return 0;
}
