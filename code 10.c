//Function to print all prime factors of a given number. (TSRN)

#include<stdio.h>

void prime_factors(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Prime Factors of %d is ",N);
    prime_factors(N);
    return 0;
}

void prime_factors(int num)
{
    int i;
    for(i=2;i>=1;i++)
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
        }
    }
}