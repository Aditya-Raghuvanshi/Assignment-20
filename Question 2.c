//Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>

void swap_string(char* ,char* );
int main()
{
    char a[20],b[20];
    printf("Enter two strings ");
    fgets(a,20,stdin);
    fgets(b,20,stdin);
    printf("you have entered a = %s ",a);
    printf("And b = %s ",b);
    swap_string(&a,&b);
    printf("After swaping a = %s ",a);
    printf("And b = %s ",b);
    return 0;
}
void swap_string(char* x,char* y)
{
    char temp[20];
    strcpy(&temp,x);
    strcpy(x,y);
    strcpy(y,&temp);
}
