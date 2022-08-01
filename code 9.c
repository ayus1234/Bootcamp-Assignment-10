//Function to check whether a given number contains a given digit or not.(TSRS)

#include<stdio.h>

int containDigit(int,int);

int main()
{
    int N,D;
    printf("Enter the number and digit\n");
    scanf("%d %d",&N,&D);
    printf("%d",containDigit(N,D));
    return 0;
}

int containDigit(int num,int digit)
{
    int i,temp;
    for(i=1;num!=0;i++)
    {
        temp=num%10;
        if(temp==digit)
           return 1;
        else
           num=num/10;
    }
    return 0;
}