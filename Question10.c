//10. Write a function to find the repeated character in a given string.
#include<stdio.h>
void repeatedchar(char a[])
{   char freq[150]={0};
    int i;
    for ( i = 0;a[i]!='\0' ; i++)
    {    if(a[i]!=' ')
        freq[a[i]]++;
    }
    for ( i = 0; i <=150; i++)
    {   
        if(freq[i]!=0 && freq[i]!='\0')
       printf("%c ==>%d\n",i,freq[i]);
    }
    
}
int main()
{
    char str[30];
    printf("Enter a string \n");
    fgets(str,30,stdin);
    repeatedchar(str);

}