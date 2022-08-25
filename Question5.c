//5. Write a function to transform a string into lowercase
#include<stdio.h>
void lowerstring(char s[]);
int main()
{
    char str[30];
    printf("Enter a string :\n");
    fgets(str,30,stdin);
    lowerstring(str);

    return 0;
}
void lowerstring(char s[])
{
    int i;
    for ( i = 0;s[i]; i++)
    {
        if (s[i]>='A'&& s[i]<='Z')
        {
           s[i]=s[i]+32;
        }
        
    }
       
       printf("%s",s);
}