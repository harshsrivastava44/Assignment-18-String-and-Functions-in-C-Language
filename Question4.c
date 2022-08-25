//4. Write a function to transform string into uppercase
#include<stdio.h>
void uprstring(char s[]);
int main()
{
    char str[30];
    printf("Enter a string :\n");
    fgets(str,30,stdin);
    uprstring(str);

    return 0;
}
void uprstring(char s[])
{
    int i;
    for ( i = 0;s[i]; i++)
    {
        if (s[i]>='a'&& s[i]<='z')
        {
           s[i]=s[i]-32;
        }
        
    }
       
       printf("%s",s);
}
