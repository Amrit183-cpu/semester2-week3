#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Amritpal Singh
 * ID:201965262
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 36250; //14-40k
    float NI = 0.08; //0-10%
    float tax_rate = 0.15; //10-30%
    float take_home_pay = salary;
    float NI_cont; //NI contributions
    float tax_cont; //tax contributions

    // calculate the deductions and final take-home salary

    //salary check range 
    if (salary>=14000 && salary <=40000){
      //NI check range
      if (NI>=0 && NI<=10){
         //deduct NI
         NI_cont = salary * NI;
         take_home_pay = take_home_pay - NI_cont;
         //tax rate check range
         if (tax_rate>=10 && tax_rate<=30){
            //salary>12500 check 
            if (take_home_pay>12500){    
               //deduct tax rate
               tax_cont = (take_home_pay-12500) * tax_rate;
               take_home_pay = take_home_pay - tax_cont;
            }
         }
      }
   }

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f",salary);
    printf("NI contribution £%.2f",NI_cont);
    printf("Tax contribution £%.2f",tax_cont);
    printf("Take home salary £%.2f",take_home_pay);

    return 0;
 }