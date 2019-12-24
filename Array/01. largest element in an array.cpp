#include<bits/stdc++.h>
using namespace std;


int maxElement(int a[],int n)
{
    return *max_element(a,a+n);
}

int main()
{
    int a[100],n;
    cout<<"Array length : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Largest element is : "<<maxElement(a,n);

    return 0;
}
