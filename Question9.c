/*9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )*/
#include<stdio.h>
void revstr(char s[],int i,int j)
{   
    char temp=0;
      while(i<=j)
      {
         temp=s[i];
         s[i]=s[j];
         s[j]=temp;
         i++;
         j--;
      }

}
int main()
{
   char str[40]=" Mysirg Education Services";
   int start=0,end=0,i=0,flag=0;
   while(str[i]!='\0')
   {   
       while(str[i]!=' ')
       {
        if(str[i]=='\0')
        {
             flag=1;
             break;
        }
        end++;
        i++;
       }
        revstr(str,start,end-1);
        if(flag==1)
        break;
        start=end++;
        i++;
     
   }
   revstr(str,0,i-1);
   printf("%s",str);
    
   
  
    return 0;

}