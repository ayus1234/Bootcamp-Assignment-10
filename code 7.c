//Function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>

int factorial(int);
int combination(int,int);

int main()
{
    int N,R;
    printf("Enter the value of n and r\n");
    scanf("%d %d",&N,&R);
    printf("Number of Combinations is %d",combination(N,R));
    return 0;
}

int factorial(int num)
{
    int i,fact=1;
    for(i=num;i>=1;i--)
        fact=fact*i;
    return fact;
}

int combination(int n,int r)
{
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}