#include<bits/stdc++.h>
using namespace std;

int rotation(int a[100][100],int m,int n)
{
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--)
            printf("%d ", a[i][j]);

        printf("\n");
    }
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
    rotation(a,m,n);
    return 0;
}

