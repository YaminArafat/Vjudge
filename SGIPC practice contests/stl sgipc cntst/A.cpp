#include<bits/stdc++.h>
using namespace std;
int main()

{
    int x= 0;

        while (1)
        {
            int p,q,i,s=0;
            cin>>p>>q;
            int k[q];
            if (p==0 && q== 0)
            {
                break ;
            }
            else
            {
                int ara[p] ;
                for (i=0 ;i<p;i++)
                {
                    cin>>ara[i];
                }
                sort(ara,ara+p);#include<bits/stdc++.h>
using namespace std;
int main()
{
        while (1)
        {
            int p,q,i,k,s=0;
            cin>>p>>q;
            if (p==0 && q== 0)
            {
                break ;
            }
            else
            {
                int ara[p] ;
                for (i=0 ;i<p;i++)
                {
                    cin>>ara[i];
                }
                sort(ara,ara+p);
                for (i=0 ;i<q;i++)
                {
                    cin>>k;

                }
                for(i=0 ;i<p;i++)
                {
                    if (ara[i] == k)
                    {
                        printf("%d found in %d\n",k,ara[i]) ;
                        s++ ;
                        break ;
                    }
                }
                if (s=0)
                {


                            printf("%d not found\n",k);
                }
            }
        }
}


                for (i=0 ;i<q;i++)
                {
                    cin>>k[i];

                }
                for(i=0;i<p;i++)
                {
                    if (ara[i] == k[x] )
                    {
                        printf("%d found in %d\n",k[x],ara[i]) ;
                        s++ ;
                        break ;
                    }
                }
                if (s=0)
                {


                            printf("%d not found\n",k[x]);
                }
                x++ ;
            }
        }
}
