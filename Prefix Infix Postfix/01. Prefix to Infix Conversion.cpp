#include<bits/stdc++.h>
using namespace std;

bool isope(char a)
{
    switch(a)
    {
    case '+':
    case '-':
    case '*':
    case '/':
        return true;
    }
    return false;
}

string infix(string S)
{
    stack<string>S1;
    int l = S.size();

    for(int i=l-1;i>=0;i--)
    {
        if(isope(S[i]))
        {
            string op1=S1.top();
                S1.pop();
            string op2=S1.top();
                S1.pop();

            string temp = "("+op1 + S[i] + op2 +")";
            S1.push(temp);
        }
        else
        {
            S1.push(string(1,S[i]));
        }

    }
    return S1.top();
}

int main()
{
    string S = "*-A/BC-/AKL";
    cout<<"The input prefix number is : " <<S;
    cout<<"\n";
    cout<<"The infix number is : " <<infix(S);
}
