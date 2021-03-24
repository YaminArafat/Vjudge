#include<bits/stdc++.h>
using namespace std;
int main()
{
int t , k=0;
scanf("%d",&t);
while(t--){
unsigned long long w,m=2 ;
scanf("%llu",&w);
if(w%2!=0)printf("Case %d: Impossible\n",++k);
else{
while(w%2==0)
    {
        w/=m;
        m+=2;
}
m-=2;
printf("Case %d: %llu %llu\n",++k,w,m);
}
}
}

