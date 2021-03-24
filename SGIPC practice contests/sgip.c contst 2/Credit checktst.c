#include <stdio.h>
int main()
{
    char ch[25];
    int sum_doubled, sum_undoubled, i, j, digit, test_case;
    scanf("%d", &test_case);
    getchar();
    for (j=0; j<test_case; j++)
    {
        gets(ch);
        for(i=0, sum_doubled=0; i<18; i=i+2)
        {
            ch[i]*=2;
            if(ch[i]>=10)
                ch[i]=(ch[i]%10)+1;

            sum_doubled+=ch[i];
        }
        for(i=1, sum_undoubled=0; i<19; i=i+2)
            sum_undoubled+=ch[i];
        if((sum_doubled+sum_undoubled)%10==0){
            printf("Valid\n");
        }
        else {
            printf("Invalid\n");
        }
    }
}
