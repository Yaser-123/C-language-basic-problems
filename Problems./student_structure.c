#include<stdio.h>
struct student
{
    char name[100];
    long int rollno;
    int marks[5];
}s;
void main()
{
    printf("Enter student name : ");
    scanf("%s",s.name);
    printf("Enter roll no :");
    scanf("%ld",&s.rollno);
    printf("Enter three subject marks");
    for(int i=0;i<=3;i++)
    {
        scanf("%d",&s.marks[i]);
       
    }
     for(int i=0;i<=3;i++)
    {
        
        printf("%3d \n",s.marks[i]);
    }
    printf("%s\n",s.name);
    printf("%ld",s.rollno);
}