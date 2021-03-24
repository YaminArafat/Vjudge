#include <iostream>
#include <cstdio>
#define MAX 20000000
#define Check_bi(a,pos)(a&(1<<pos))
#define Set_bi(a,pos)(a|=(1<<pos))
unsigned flag[(MAX/64)+2];
using namespace std;
void seive(void)
{
    long long unsigned int i,j;
    for (i=3; i*i<=MAX; i+=2)
    {
        if (Check_bi(flag[i>>6],(i/2)%32)==0)
        {
            for (j=i*i; j<=MAX; j+=2*i)
            {
                flag[j>>6]=Set_bi(flag[j>>6],(j/2)%32);
            }
        }
    }
}
int main()
{
    long long unsigned int n,i,j,k,count=0;
    seive();
    while (scanf("%lld",&n)==1 && n!=EOF)
    {
        count=0;
        for (i=3; i<=MAX; Check_bi(flag[(i+2)>>6],((i+2)/2)%32)==0?i+=2:i+=4)
        {
            if (Check_bi(flag[i>>6],(i/2)%32)==0&&Check_bi(flag[(i+2)>>6],((i+2)/2)%32)==0)
            {
                count++;
                if (count==n)
                {
                    printf("(%lld, %lld)\n",i,i+2);
                    break;
                }
            }
        }
    }
    return 0;
}
