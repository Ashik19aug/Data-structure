#include<bits/stdc++.h>
using namespace std;

string wordReverse(string S)
{
    string word="";
    reverse(S.begin(),S.end());
    int l=S.length();
    int b=-1;
    for(int i=0;i<=l;i++)
    {
        if(S[i]==' ' || S[i]=='\0')
        {
            for(int j=i-1;j>b;j--)
                word +=S[j];
            word +=S[i];
            b=i;
        }
    }
    return word;
}


int main()
{
    string S="I love MySelf";
    cout<<wordReverse(S);
    return 0;
}
