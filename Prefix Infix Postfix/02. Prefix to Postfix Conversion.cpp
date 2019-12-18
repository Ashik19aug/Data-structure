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

string postfix(string S)
{
    stack<string>S1;
    int l = S.size();

    for(int i=l-1;i>=0;i--)
    {
        if(isOpe(S[i]))
        {
            string op1 = S1.top();
            S1.pop();
            string op2 = S1.top();
            S1.pop();

            string temp = op1+op2+S[i];
            S1.push(temp);
        }
        else
            S1.push(string(1,S[i]));
    }
    return S1.top();
}

int main()
{
    string S="*-A/BC-/AKL";
    cout<<"PreFix String is : "<<S<<"\n";
    cout<<"PostFix String is : "<<postfix(S);
    return 0;
}
