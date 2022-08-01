//Function to calculate the factorial of a number. (TSRS)

#include<stdio.h>

int factorial(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Factorial of %d is %d",N,factorial(N));
    return 0;
}

int factorial(int num)
{
    int i,fact=1;
    for(i=num;i>=1;i--)
        fact=fact*i;
    return fact;
}