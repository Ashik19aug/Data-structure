#include<bits/stdc++.h>
using namespace std;

bool isSub(char s1[], char s2[], int m, int n)
{
    int j=0;
    for(int i=0; i<n&&j<m; i++)
        if(s1[j]==s2[i])
            j++;
    return (j==m);
}

int main()
{
    char s1[]="Ash";
    char s2 []= "Ashik";
    int m,n;
    m=strlen(s1);
    n=strlen(s2);
    isSub(s1, s2, m, n)? cout << "Yes ":
                         cout << "No";
    return 0;
}
