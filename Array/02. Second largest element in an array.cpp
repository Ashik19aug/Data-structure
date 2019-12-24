#include<bits/stdc++.h>
using namespace std;

void secondLargestElement(int a[],int n)
{
    int x,y,i;

    if(n<2)
    {
        cout<<"invalid input.\n";
        return;
    }
    x=y=INT_MIN;
    for(i=0;i<n;i++)
    {

        if(a[i]>x)
        {
            y=x;
            x=a[i];
        }
        else if(a[i]>y && a[i]!=x)
            y=a[i];
    }
    if(y==INT_MIN)
        cout<<"There is no second element.\n";
    else
        cout<<"The second element is : "<<y;
}

int main()
{
    int a[] = {12, 35, 1, 10, 34, 1};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    secondLargestElement(a,n);
    return 0;
}
