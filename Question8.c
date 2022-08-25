//8. Write a function to count words in a given string
#include<stdio.h>
void wordcount(char s[])
{
    int i,l,count=1;
   for(i=0;s[i];i++)
     if(s[i]==' '&& s[i+1]!=' ')
      count++;
  printf("the string ==%s\nhaving word==%d",s,count);

}
int main()
{
   char str[20];
    printf("Enter a string : \n");
    fgets(str,20,stdin);
   wordcount(str);
    return 0;

}