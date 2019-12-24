#include<bits/stdc++.h>
using namespace std;

void subMatrix(int a[100][100],int b[100][100],int ans[100][100],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ans[i][j]=a[i][j]-b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int a[100][100],b[100][100],ans[100][100],n;
    cout<<"input the size of matrix : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    subMatrix(a,b,ans,n);
    return 0;
}


