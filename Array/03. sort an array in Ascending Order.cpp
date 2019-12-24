#include<bits/stdc++.h>
using namespace std;

void sortArray(int a[],int n)
{
    int temp;
    if(n==1 && n==0)
    {
        cout<<"Invalid input.\n";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
}


int main()
{
    int a[] = {12, 35, 1, 10, 34, 1};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    sortArray(a,n);
    return 0;
}
