//1. Write a function to calculate length of the string
#include<stdio.h>
void strlength(char s[],int);
int main()
{ int l;
    char str[20];
    strlength(str,20);
    return 0;
}
void strlength(char s[],int n)
{
   int i;
    printf("Enter a string :\n");
    fgets(s,n,stdin);

   for(i=0;i<=s[i];i++);
   printf("%d is length of the string \n ",i);
}

