#include<bits/stdc++.h>
using namespace std;

void  insertionSort(int A[], int n)
{
    int i,x,index;
    for(i=1;i<n;i++)
    {
        x=A[i];
        index=i;
        while(index>0 && A[index-1]>x)
        {
            A[index]=A[index-1];
            index=index-1;
        }
        A[index]=x;
    }
}

void displayArray(int A[],int n)
{
 int i;
 for(i=0;i<n;i++)
  cout<<A[i]<<" ";
}

int main()
{
 int n,i,e;
 cout<<"enter Array size: ";
 cin>>n;
 int A[n];
 cout<<"enter Array :";
 for(i=0;i<n;i++)
 cin>>A[i];
 insertionSort(A,n);
 cout<<"Array after sorting: ";
 displayArray(A,n);

 return 0;
}
