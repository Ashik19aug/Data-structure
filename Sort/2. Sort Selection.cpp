#include<bits/stdc++.h>
using namespace std;

int slection(int arr[],int n)
{
    int small,temp,i,j;

    for(i=0;i<n-1;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[small])
                j=small;
        }
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

void display(int arr[],int n)
{
 int i;
 for(i=0;i<n;i++)
  cout<<arr[i]<<" ";
 cout<<"\n";
}

int main()
{
    int arr[100],n,i;
    cout<<"Enter the array size :";
    cin>>n;
    cout<<"Enter the array value :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    slection(arr,n);
    display(arr,n);
    return 0;
}
