#include <iostream>
using namespace std;
int main()
{
    int m,s,i,temp;
    cin>>m>>s;
    temp=s;
    int str[m];
    if (m*9<s || s==0)
    {
        cout<<"-1 -1"<<endl;
        return 0;
    }
    //if (m>s)
    //{
    for (i=0; i<m; i++)
    {
        if(s>=9)
        {
            str[i]=9;
            s=s-9;
        }
        else if (s && i!=m-1)
        {
            str[i]=s;
        }
        else
        {
            str[i]=s;
        }
    }
    for(i=m-1; i>=0; i--)
    {
        cout<<str[i];
    }
    cout<<" ";
    //if (s!)
    for(i=0; i<m; i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    // }
    /*else
    {
        for (i=0; i<m; i++)
        {
            if(s>=1)
            {
                str[i]=1;
                s=s-1;
            }
            else
            {
                str[i]=0;
            }
        }
        for(i=0; i<m; i++)
        {
            cout<<str[i];
        }
        cout<<" ";
        for (i=0; i<m; i++)
        {
            if(temp>=1 && (i==0||i==m-1))
            {
                str[i]=1;
                s=s-1;
            }
            else
            {
                str[i]=0;
            }
        }
        for(i=m-1; i>=0; i--)
        {
            cout<<str[i];
        }
        cout<<endl;
    }*/
    return 0;
}
