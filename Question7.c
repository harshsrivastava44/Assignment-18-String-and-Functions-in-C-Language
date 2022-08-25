//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
void palindrome(char a[],int l)
{   int i=0,j=l-2;
   while(i<=j)
   {
    if (a[i]!=a[j])
    break;
    i++;
    j--;
   }
   if (i>j)
    printf("palindrme");
    else
    printf("Not palindrome");
   

}
int main()
{
    char str[20];
    int l;
    printf("Enter a string \n");
    fgets(str,20,stdin);
     for(l=0;str[l];l++);
    palindrome(str,l);
}