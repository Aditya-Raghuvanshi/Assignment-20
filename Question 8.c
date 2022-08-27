//Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int a[n];
    sum(a,n);
    return 0;
}
void sum(int* p,int N)
{
    int s=0,i;
    printf("Enter %d elements ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",p+i);
        s=s+p[i];
    }
    printf("Sum of all elements is %d ",s);
}
