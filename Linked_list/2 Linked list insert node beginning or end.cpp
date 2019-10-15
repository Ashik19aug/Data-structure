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

int insertend(int y)                 ///insert at the End of linked list...
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
}

///main function
int main()
{
    insertfirst(2);
    insertfirst(3);
    insertend(5);
    display();
    return 0;
}
