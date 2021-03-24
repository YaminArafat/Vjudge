#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,p,q,i,j;
    while (1)
    {
        int s=0;
        cin>>p>>q;
        if (p==0 && q== 0)
        {
            break ;
        }
            int ara[p] ;
            int k[q] ;
            for (i=0 ; i<p; i++)
            {
                cin>>ara[i];
            }
            sort(ara,ara+p);
            for (i=0 ; i<q; i++)
            {
                cin>>k[i];

            }
            printf("CASE# %d:\n",count+1);
            for(i=0 ; i<q; i++)
            {
                for (j=0; j<p; j++)
                {


                    if (k[i] != ara[j])
                    {
                        s++;
                    }
                    if (s==p)
                    {
                        printf("%d not found\n",k[i]);
                        break ;
                    }
                    else if (k[i] == ara[j])
                    {
                        printf("%d found at %d\n",k[i],j+1) ;
                        break;
                    }
                }
                s=0;

            }
        count++;
    }
    return 0;
}

