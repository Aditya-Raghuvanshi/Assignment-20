//Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<string.h>

void reverse(char* );
int main()
{
    char str[20];
    printf("Enter the string ");
    fgets(str,20,stdin);
    reverse(str);
    return 0;
}
void reverse(char* p)
{
    int i,l;
    printf("string in reversed oder is %s ",strrev(p));
}
