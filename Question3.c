//3. Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
int comparestr(char x[],char y[] );
int main()
{
    char s1[30],s2[30];
    printf("enter first string :\n");
    fgets(s1,30,stdin);
    printf("enter second string :\n");
    fgets(s2,30,stdin);
   printf("%d",comparestr(s1,s2));

    return 0;
}
int comparestr(char x[],char y[] )
{ 
    int i,j;
    for ( i = 0; x[i]; i++)
    {
        for(j=i+1;y[j];j++)
        if (x[i]<y[j] || x[i]>y[j])
        return 1;
        else if (x[i]=y[j])
        return 0;
        else
        return -1;
        
        
    }
    

}