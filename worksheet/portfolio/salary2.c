#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Amritpal Singh
 * ID:201965262
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 36250.0; //14-40k
    float NI = 0.08; //0-10%
    float tax_rate = 0.15; //10-30%
    float take_home_pay = 0;
    float tax_contribution;

    // calculate the deductions and final take-home salary
    take_home_pay = salary * (1-NI);
    if (take_home_pay>12500){
      tax_contribution = (take_home_pay-12500) * tax_rate;
      take_home_pay = take_home_pay - tax_contribution;
    } 
      
    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £%.2f",salary);
    //printf("NI contribution £%.2f",(salary*NI));
    //printf("Tax contribution £%.2f",(tax_contribution));
    //printf("Take home salary £%.2f",take_home_pay);

    return 0;
 }