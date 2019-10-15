
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

void reverselist()
{
    Node *a,*b,*c;
    a=NULL;
    b=head;

    while(b!=NULL)
    {
        c=b->link;
        b->link=a;
        a=b;
        b=c;
    }
    head=a;
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
    reverselist();
    display();

    return 0;
}
