#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

string S1,S2;

int SubStringLength(ll m, ll n)
{
    if(m==0 || n==0)
    {
        return 0;
    }
    else if(S1[m-1]==S2[n-1])
    {
        return 1+SubStringLength(m-1,n-1);
    }
    else
    {
        return max(SubStringLength(m-1,n),SubStringLength(m,n-1));
    }
}

int main()
{
    cout<<"Input String S1 : ";
    cin>>S1;
    cout<<"Input string S2 : ";
    cin>>S2;
    ll m=S1.length(),n=S2.length();
    cout<<"Longest SubString length is : ";
    cout<<SubStringLength(m,n);
}
