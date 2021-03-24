#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int tc,i,j,k,n,count=0,m;
    char arq[101];
    cin>>tc;
    for (i=0;i<tc;i++)
    {
        cin>>n>>m;
        for (j=0;j<n;j++)
        {
            cin>>arq[j];
            //for (k=0;k<strlen(arq);k++)
            //{
                if (arq[j]>=arq[m])
                {
                    count++;
                }
            //}
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}
