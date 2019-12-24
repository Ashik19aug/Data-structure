#include<bits/stdc++.h>
using namespace std;

void multiMatrix(int a[100][100],int b[100][100],int m,int n,int p,int q)
{
    int ans[m*q][n*p];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<m;k++)
            {
                for(int l=0;l<p;l++)
                {
                    ans[i+l+1][j+k+1]=a[i][k]*b[j][l];
                    cout<<ans[i+l+1][j+k+1]<<" ";
                }
            }
            cout<<"\n";
        }
    }
}



int main()
{
    int a[100][100],b[100][100],m,n,p,q;
    cout<<"input the size of matrix 1 column & row : ";
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"input the size of matrix 1 column & row : ";
    cin>>p>>q;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }
    multiMatrix(a,b,m,n,p,q);
    return 0;
}

