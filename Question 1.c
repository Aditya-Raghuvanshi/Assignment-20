//Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>

void swap(int* a,int* b);

int  main()
{
    int a,b;
    printf("Enter any two numbers which you want to swap ");
    scanf("%d%d",&a,&b);
    printf("currently a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("after swapping a = %d and b = %d",a,b);  //hear a and b are swaped
    return 0;
}

void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
