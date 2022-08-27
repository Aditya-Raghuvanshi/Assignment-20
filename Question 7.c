/*Write a program to count the number of vowels and consonants in a string using a
pointer.*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    printf("Enter the string ");
    fgets(str,20,stdin);
    count(str);
    return 0;
}
void count(char* p)
{
    int i,l,v=0,c=0;
    l=strlen(p);
    p[l-1]=NULL;
    for(i=0;p[i]!=NULL;i++)
    {
        if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u')
        {
            v++;
        }
        else
            c++;
    }
    printf("no. of vowels in the string are : %d\n",v);
    printf("no. of consonants in the string are : %d",c);
}
