//Name:newton mwaki
//Reg no:CT100/G/30742/26

//To check if student is eligible for final exam
#include<stdio.h>
int main()
{
	
//Declare the variable
int atendance;
float average_marks;

printf("enter the atendance in percentage:\n");	
scanf("%d",&atendance);

printf("enter the average_marks:\n");
scanf("%f",&average_marks);

//check the qualification

if(atendance>=75&&average_marks>=40)
{
printf("you qualify for the exam\n");	
}
else
{
printf("not eligible\n");	
}
return 0;
}	