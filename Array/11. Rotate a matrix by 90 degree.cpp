#include<bits/stdc++.h>
using namespace std;

int revColumn(int a[100][100],int m,int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0, k = n - 1; j < k; j++, k--)
            swap(a[j][i], a[k][i]);
}

int transposMatrix(int a[100][100],int m,int n)
{
    for (int i = 0; i < m; i++)
        for (int j = i; j < n; j++)
            swap(a[i][j], a[j][i]);
}

int main()
{
    int a[100][100],n,m;
    cout<<"input the size of matrix row & column : ";
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    revColumn(a,m,n);
    transposMatrix(a,m,n);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
