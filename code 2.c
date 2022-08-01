//Function to calculate simple interest. (TSRS)

#include<stdio.h>

float simple_interest(int,int,int);

int main()
{
    int P,R,T;
    printf("Enter the Principal, Rate and Time\n");
    scanf("%d %d %d",&P,&R,&T);
    printf("Simple Interest having Principal %d, Rate %d and Time %d is %.2f",P,R,T,simple_interest(P,R,T));
    return 0;
}

float simple_interest(int principal,int rate,int time)
{
    return (principal*rate*time)/100.0;
}