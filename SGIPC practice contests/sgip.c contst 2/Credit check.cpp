#include <stdio.h>

int main()
{
    int ch[19];
    int sum_doubled, sum_undoubled, i , j, k, digit, test_case, t;
    scanf("%d", &test_case);
    //{
        for(t=1; t<=test_case; t++)
        {
            for(i=0; i<16; i++)
                    scanf("%1d", &ch[i]);
       /*জোড় স্থানের সংখ্যা গুলোর যোগফল পেতে*/
       for(i=0, sum_doubled=0; i<16; i=i+2)
        {
            ch[i]*=2;
            if(ch[i]>=10)
                ch[i]=(ch[i]%10)+1;

            sum_doubled+=ch[i];
        }
         /*বিজোড় স্থানের সংখ্যা গুলোর যোগফল পেতে*/
        for(i=1, sum_undoubled=0; i<16; i=i+2)
            sum_undoubled+=ch[i];
        if((sum_doubled+sum_undoubled)%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
        }
    //}
}
