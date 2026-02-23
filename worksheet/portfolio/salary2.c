#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Amritpal Singh
 * ID:201965262
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    double salary = 36250.0; //14-40k
    double NI = 0.08; //0-10%
    double tax_rate = 0.15; //10-30%
    double take_home_pay = salary;
    double NI_cont = 0; //NI contributions
    double tax_cont = 0; //tax contributions

    // calculate the deductions and final take-home salary


    NI_cont = salary * NI;
    take_home_pay = take_home_pay - NI_cont;
    //salary>12500 check 
    if (take_home_pay>12500.0){    
       //deduct tax rate
       tax_cont = (take_home_pay-12500.0) * tax_rate;
       }
    take_home_pay = take_home_pay - tax_cont;
      
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f",salary);
    printf("NI contribution £%.2f",NI_cont);
    printf("Tax contribution £%.2f",tax_cont);
    printf("Take home salary £%.2f",take_home_pay);

    return 0;
 }