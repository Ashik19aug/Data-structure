#include<bits/stdc++.h>
using namespace std;

void swape(int* a, int* b)
{
    int t=*a;
    *b=*a;
    *b=t;
}

int partision(int arr[],int low,int high)
{
    int last=arr[high];
    int i= (low-1);

    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=last)
        {
            i++;
            swape(&arr[i],&arr[j]);
        }
    }
    swape(&arr[i+1],&arr[high]);
    return i+1;
}

int quick(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partision(arr,low,high);

        quick(arr,low,pi-1);
        quick(arr,pi+1,high);
    }
}

int printarr(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[20],n,i,m;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    n=sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,n-1);
    printarr(arr,n);
    return 0;
}
