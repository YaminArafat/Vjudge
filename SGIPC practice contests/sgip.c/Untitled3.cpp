#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    int n,i,sum=0;
    printf("Enter a number :");
    scanf("%d", &n);
    system("cls");

    for (i=1; i<=n; i=i+2)
    {
        if (i%3==0)
        {
            sum=sum+i;
        }
    }
    printf("Sum of odd numbers=%d\n",sum);
    return 0;
}

