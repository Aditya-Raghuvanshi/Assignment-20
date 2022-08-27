//Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(&a,n);
    printf("Sorted array is : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void sort(int* p,int N)
{
    int i,j;
    for(i=1;i<N;i++)
    {
        for(j=0;j<N-i;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                int temp;
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
}
