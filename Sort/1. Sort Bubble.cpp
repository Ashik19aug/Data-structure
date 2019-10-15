#include<bits/stdc++.h>
using namespace std;


int bubblesort(int arr[],int n)             ///bubble sort function.....
{
    int k,i,flag,temp;
    for(k=1;k<n;i++)
    {
        flag=0;
        for(i=0;i<n-k;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}

int display(int arr[],int n)                ///Display the array
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int arr[100],n,i;
    cout<<"Enter the number of array: ";
    cin>>n;
    cout<<"Enter The array :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    cout<<"After sorting : ";
    display(arr,n);
    return 0;
}
