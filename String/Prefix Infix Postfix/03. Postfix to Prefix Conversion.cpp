#include<bits/stdc++.h>
using namespace std;

bool isOpe(char o)
{
    switch(o)
    {
    case '+':
    case '-':
    case '*':
    case '/':
        return true;
    }
    return false;
}

string prefix(string S)
{
    stack<string>S1;
    int l = S.size();

    for(int i=0;i<l;i++)
    {
        if(isOpe(S[i]))
        {
            string op1 = S1.top();
            S1.pop();
            string op2 = S1.top();
            S1.pop();

            string temp = S[i]+op2+op1;
            S1.push(temp);
        }
        else
            S1.push(string(1,S[i]));
    }
    return S1.top();
}

int main()
{
    string S="ABC/-AK/L-*";
    cout<<"Input PostFix String is : "<<S<<"\n";
    cout<<"The PreFix String is : "<<prefix(S);
    return 0;
}
