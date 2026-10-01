//Name:Newton MWAKI
//Reg no:CT100/G/30742/26
//course : Information technology 

#include<stdio.h>

float calculateTax(float gross_salary)
{
float Tax;
if(gross_salary<30000)
{
Tax=0.05*gross_salary;
}
else if(gross_salary>=30000 && gross_salary<60000)
{
Tax=0.1*gross_salary;
}
else
{
Tax=0.15*gross_salary;
}
return Tax;
}

int main()
{
float gross_salary, Tax,netsalary;
    printf("enter emloyees grossSalary in ksh");
    scanf ("%f",& gross_salary);
    
    
        Tax  = calculateTax(gross_salary);
       netsalary =gross_salary-Tax ;
    
    printf("gross_salary=ksh %.2f\n", gross_salary);
    printf ("Tax=ksh %.2f\n",Tax);
    printf ("netsalary=ksh %.2f\n", netsalary);
    return 0;
}