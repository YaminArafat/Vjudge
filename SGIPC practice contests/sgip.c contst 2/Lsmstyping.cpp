#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int t,i,j,a=0,b=0,sum=0,k;
    char str[102];
    cin>>t;
    getchar();
    for (i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        //gets(str);
        for (j=0; j<strlen(str); j++)
        {
            if (str[j] == 'a' || str[j] == 'd' || str[j] == 'g' || str[j] == 'j' || str[j] == 'm' || str[j] == 'p' || str[j] == 't' || str[j] == 'w' || str[j] == ' ')
            {
                a=a+1;
            }
            else if (str[j] == 'b' || str[j] == 'e' || str[j] == 'h' || str[j] == 'k' || str[j] == 'n' || str[j] == 'q' || str[j] == 'u' || str[j] == 'x')
            {
                a=a+2;
            }
            else if (str[j] == 'c' || str[j] == 'f' || str[j] == 'i' || str[j] == 'l' || str[j] == 'o' || str[j] == 'r' || str[j] == 'v' || str[j] == 'y')
            {
                a=a+3;
            }
            else if (str[j] == 's' || str[j] == 'z')
            {
                a=a+4;
            }
        }
        cout<<"Case #"<<i+1<<": "<<a<<endl;
        a=0;
    }
    return 0;
}
