#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    int c,f;
    char n;
    printf("Enter x to convert Celsius to Fahrenheit\n");
    printf("Enter y to convert Fahrenheit to Celsius\n");
    scanf("%c", &n);
    system("cls");
    if (n=='x')
    {
        printf("Enter Celsius temperature to convert Celsius to Fahrenheit:");
        scanf("%d",&c);
        f=((9*c/5)+32);
        printf("In Fahrenheit:%d",f);
    }
    if (n=='y')
    {
        printf("Enter Fahrenheit temperature to convert Fahrenheit to Celsius:");
        scanf("%d",&f);
        c=(f-32)*(5/9);
        printf("In Celsius:%d",c);
    }
    return 0;
}


