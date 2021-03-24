#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int a;
    char A;
    //printf("Enter number 97.....\n");
    //scanf("%d" , &a);
    //system("cls");
    for (a=97,A='A';a<=122,A<='Z';a++,A++)
    {
        printf("%c %c\n",a,A);
    }
    return 0;
}
