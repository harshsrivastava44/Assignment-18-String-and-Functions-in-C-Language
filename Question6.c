/*6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/
#include<stdio.h>
void alphanumericstring(char s[]);
int main()
{
    char str[30];
    printf("Enter a string :\n");
    fgets(str,30,stdin);
    alphanumericstring(str);

    return 0;
}
void alphanumericstring(char s[])
{
    int i,j;
    for ( i = 0;s[i]; i++)
    {   
        for(j=i;s[j];j++)
        if (s[i]>='A'&& s[i]<='Z'&& s[i]>='a'&& s[i]<='z'&& s[i]>='0'&& s[i]<='9' )
          {printf("%s is  a alpha numeric string",s); 
          break;}
        else
        return;

        
    }
       
       
}