//Write a program to calculate the length of the string using a pointer
#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter the string ");
    fgets(str,20,stdin);
    printf("Length of the string is %d",length(str));
    return 0;

}
int length(char* p)
{
    int i;
    for(i=0;p[i]!=0;i++);
    return i;
}
