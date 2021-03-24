#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[31]= {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/','\0'};
    char c;
    char inpu[101];
    cin>>c;
    cin>>inpu;
    int i,j;
    if (c=='L')
    {
        for (i=0; i<strlen(inpu); i++)
        {
            for (j=0; j<strlen(str); j++)
            {
                if(inpu[i]==str[j])
                {
                    inpu[i]=str[j+1];
                    break;
                }
            }
        }
    }
    else if (c=='R')
    {
        for (i=0; i<strlen(inpu); i++)
        {
            for (j=0; j<30; j++)
            {
                if(inpu[i]==str[j])
                {
                    inpu[i]=str[j-1];
                    break;
                }
            }
        }
    }
    cout<<inpu<<endl;
    return 0;
}
