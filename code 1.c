//Function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float area(int);

int main()
{
    int R;
    printf("Enter the Radius of the Circle\n");
    scanf("%d",&R);
    printf("Area of Circle having Radius %d is %.2f",R,area(R));
    return 0;
}

float area(int radius)
{
    return 3.14*radius*radius;;
}