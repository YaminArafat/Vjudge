#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    char str[100];
    char str2[100];
    cin>>str;
    cin>>str2;
    int i=0,count=0,count1=0,len,temp,temp2=0;
    while (str[i]!='|')
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            count++;
        }
        i++;
    }
    i+=1;
    while(str[i]!='\0')
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            count1++;
        }
        i++;
    }
    len=strlen(str)+strlen(str2);
    if(count==0 && strlen(str2)<count1)
    {
        cout<<"Impossible"<<endl;
    }
    else if(count1==0 && strlen(str2)<count)
    {
        cout<<"Impossible"<<endl;
    }
    else if ((len-1)%2==0)
    {
        if (count1+strlen(str2)>=count && count+strlen(str2)>=count1)
        {
            for (i=0;; i++)
            {
                if (str[i]=='|')
                {
                    break;
                }
                else
                {
                    cout<<str[i];
                }
            }
            temp=i;
        }
        else
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
        if(count<(len-1)/2)
        {
            for(i=0; i<strlen(str2); i++)
            {
                count++;
                cout<<str2[i];
                if(count==(len-1)/2)
                {
                    cout<<"|";
                    temp2=i;
                    break;
                }
            }
            for(i=temp+1; i<strlen(str); i++)
            {
                cout<<str[i];
            }
            for(i=temp2+1; i<strlen(str2); i++)
            {
                cout<<str2[i];
            }
            cout<<endl;
        }
        else if(count==(len-1)/2)
        {
            cout<<"|";
            for(i=temp+1; i<strlen(str); i++)
            {
                cout<<str[i];
            }
            for(i=0; i<strlen(str2); i++)
            {
                cout<<str2[i];
            }
            cout<<endl;
        }

    }
    else
    {
        cout<<"Impossible"<<endl;
    }
    return 0;
}
