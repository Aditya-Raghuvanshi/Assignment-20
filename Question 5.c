//Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter any two numbers ");
    scanf("%d%d",&a,&b);

    printf("Maximum number between %d and %d is %d ",a,b,max(&a,&b));
    return 0;
}
int max(int* x,int* y)
{
    int max=*x,i;
    for(i=*x+1;i<=*y;i++)
    {
        if(max<i)
        {
            max=i;
        }
    }
    return(max);
}
