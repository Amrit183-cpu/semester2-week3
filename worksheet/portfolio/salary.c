
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Amritpal Singh
 * ID: 201965262
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 36250; //set salary to 36250
    float national_insurance = 8; //set NI to 8
    float tax_rate = 15; //set tax to 15
    float taxed_amount = 0; //var to store amount that is taxed
    float take_home_pay = 0; //var to store final pay
    float ni_contributions = 0; //calc ni amount

    if (salary>=14000.0 && salary<=40000.0) //check salary limits
    {
      if (national_insurance>=0.0 && national_insurance<=10.0) //check NI limits
      {
         ni_contributions = salary * (national_insurance/100.0); //calc ni with percentage
         take_home_pay = salary - ni_contributions; 
         if (tax_rate>=10.0 && tax_rate<=30.0) //check tax limits 
         {
            if (take_home_pay>12500.0) //see if take home salary is still over 12500 
            {
            taxed_amount = (take_home_pay-12500.0) * (tax_rate/100.0); 
            take_home_pay = take_home_pay - taxed_amount;
            }
         }
      }
    }
    
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f \n",salary);
    printf("NI contribution £%.2f \n",ni_contributions);
    printf("Tax contribution £%.2f \n",taxed_amount);
    printf("Take home salary £%.2f \n",take_home_pay);

    return 0;
 }