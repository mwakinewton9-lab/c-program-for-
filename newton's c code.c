//Name: newton. mwaki 
//reg no :CT100/G/30742/26
//course: information technology 

//variables and data types 

#include<stdio.h>


int main()
{
      int age;
      float income ;
       printf ("enter your age:");
       scanf ("%d",&age);
           
        printf("enter your annual income:");
        scanf("%f", &income);
        
         if(age>=21& income>=2100)
         
         printf ("congratulations you qualify for a loan.\n");
         printf ("unfortunately we are unable to offer you a loanat this time.\n");
         
    return 0; 
}