#include<bits/stdc++.h>
using namespace std;

int main()
{
    char S[]="big black bug bit a big black dog on his big black nose";
    char words[100][100];
    int i=0,j=0,k,length,result;
    cout<< " Your String is : ";
    cout<<S;

    for(k=0; S[k]!='\0' ;k++)
    {
        if(S[k] != ' ' && S[k] != '\0')
        {
            words[i][j++]= tolower(S[k]);
        }
        else
        {
            words[i][j]='\0';
            i++;
            j=0;
        }
    }

    length = i+1;

    cout<< "\n The redunent word is : ";

    for(i=0; i<length ;i++)
    {
        result = 1;
        for(j=i+1; j<length; j++)
        {
            if(strcmp(words[i],words[j])==0 && strcmp(words[j],"0")!=0)
            {
                result++;
                strcpy(words[j],"0");
            }
        }
        if(result>1)
            printf("%s", words[i]);
            cout<<" ";
    }
    return 0;
}
