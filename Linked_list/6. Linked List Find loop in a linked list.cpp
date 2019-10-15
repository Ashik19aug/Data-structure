#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *link;
};
///creat node head
Node *head=NULL;

int insertfirst(int x)
{
    Node *ptr=new Node();
    ptr->data=x;
    ptr->link=head;                 ///insert at the beginning of linked list...
    head=ptr;
}

int insertlast(int y)                 ///insert at the End of linked list...
{
    Node *ptr=new Node();
    ptr->data=y;
    ptr->link=NULL;

    if(head==NULL)                  ///if the list is empty
        head=ptr;

    else
    {
        Node *temp=head;            /// if the string is not empty
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=ptr;
    }
}

void display()
{
    Node *temp=head;
    cout<<"The link list is : ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";      ///Display function of linked list...
        temp=temp->link;
    }
    cout<<"\n\n\n";
}

int loop()
{
    Node *slow,*fast;
    slow=head;
    fast=head;
    while(fast!=NULL && fast->link!=NULL)
    {
        fast=fast->link->link;
        slow=slow->link;
        if(fast==slow)
        {
            cout<<"The linked list has LOOP.\n";
        }
    }
}



int main()
{
    insertlast(2);
    insertlast(3);
    insertlast(4);
    insertlast(5);
    insertlast(3);
    insertlast(3);
    insertlast(4);
    insertlast(5);
    insertlast(3);
    display();
    loop();

    return 0;
}
