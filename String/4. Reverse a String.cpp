#include<bits/stdc++.h>
using namespace std;

void revString(string s)
{
    stack<char>c;
    int l=s.length();

    for(int i=0;i<l;i++)
    {
        ///Store full string
        if(s[i]!=' ')
            c.push(s[i]);

        ///while find space in string
        else
        {
            while(c.empty()==false)
            {
                cout<<c.top();
                c.pop();
            }
            cout<<" ";
        }
        ///if there is no space in string

    }
    while(c.empty()==false)
        {
            cout<<c.top();
            c.pop();
        }
}

int main()
{
    string s="Ashik Shafayet";
    revString(s);
    return 0;
}
