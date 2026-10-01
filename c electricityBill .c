//Name:Newton MWAKI
//Reg no:CT100/G/30742/26
//course : Information technology 

#include<stdio.h>

float calculateBill(float number_of_units_consumed)
{
float Bill;
if(number_of_units_consumed<=100)
{
Bill=number_of_units_consumed*10;
}
else if(number_of_units_consumed>100 && number_of_units_consumed<=200)
{
Bill=(100*10)+((number_of_units_consumed-100)*15);
}
else
{
Bill= (100*10)+(100*15)+((number_of_units_consumed-200)*20);
}
return Bill;
}
int main()
{
float number_of_units_consumed, electricityBill;
printf("enter the number of units consumed");
scanf("%f",&number_of_units_consumed);

electricityBill=calculateBill(number_of_units_consumed);

printf ("number_of_units_consumed=%.2f\n", number_of_units_consumed);
printf("Total electricity Bill=sh%.2f\n", electricityBill);
    return 0;
}