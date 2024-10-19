#include<stdio.h>
#include<string.h>
void main() 
{
    char str1[500],str2[500];
    printf("Enter string to compare : ");
    scanf("%s",str1);
    strcpy(str2,str1);
    strrev(str2);
    if(strcmp(str2,str1)==0)
    {
        printf("The given string is palindrome");
    }
    else
    {
        printf("The given string is not palidrome");
    }

}