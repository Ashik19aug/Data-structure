#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *link;
};

Node *head=NULL;

int insertfirst(int x)                             ///insert at the first of linked list...
{
    Node *ptr = new Node();
    ptr->data=x;
    ptr->link=head;
    head=ptr;
}

int insertlast(int y)                              ///insert at the End of linked list...
{
    Node *ptr = new Node();
    ptr->data=y;
    ptr->link=NULL;

    if(ptr->data==NULL)
        head=ptr;
    else
    {
        Node *temp=head;
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link=ptr;
    }
}

void display()
{
    Node *temp = head;
    cout<<"The Linked list is : ";
    while(temp->link!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<"\n\n\n";
}

void deletefirst()                                ///Delete at the first of linked list...
{
    if(head==NULL)
        cout<<"The list is empty.";
    else
    {
        Node *temp=head;
        head=head->link;
        free(temp);
    }
}

void deletelast()                                ///Delete at the last of linked list...
{
    Node *ptr;

    if(head==NULL)
        cout<<"The list is empty";
    if(head->link==NULL)
    {
        ptr=head;
        head=NULL;
        free(ptr);
    }
    else
    {
        Node *ptrv;
        ptr = head;
        while(ptr->link!=NULL)
        {
            ptrv=ptr;
            ptr=ptr->link;
        }
        ptrv->link=NULL;
        free(ptr);
    }
}

int main()
{
    insertfirst(1);
    insertlast(2);
    insertlast(3);
    insertlast(4);
    insertlast(5);
    insertlast(6);
    display();
    deletefirst();
    display();
    deletelast();
    display();
    return 0;
}
