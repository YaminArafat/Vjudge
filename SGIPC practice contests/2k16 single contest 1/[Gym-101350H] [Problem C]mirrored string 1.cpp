#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[12]= {'A','H','I','M','O','T','U','V','W','X','Y'};
    int n,i,j,k,count=0;
    char s[1001];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        for(k=0; k<strlen(s); k++)
        {
            for(j=0; j<11; j++)
            {
                if (s[k]==arr[j])
                {
                    count++;
                    break;
                }
            }
        }
        if(count==strlen(s))
        {
            count=0;
            for(j=0,k=strlen(s)-1; j<strlen(s),k>=0; j++,k--)
            {
                if(s[j]==s[k])
                {
                    count++;
                }
            }
            if(count==strlen(s))
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
            count=0;
        }
        else
        {
            cout<<"no"<<endl;
            count=0;
        }
    }
    return 0;
}
