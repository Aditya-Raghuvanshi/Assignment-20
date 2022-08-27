//Write a program to print the elements of an array in reverse order.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int a[n];
    reverse(a,n);
    return 0;
}
void reverse(int* p,int N)
{
    int i;
    printf("Enter %d elements ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",p+i);
    }
    printf("all the elements in reverse oder is : ");
    for(i=N-1;i>=0;i--)
    {
        printf("%d ",p[i]);
    }
}
