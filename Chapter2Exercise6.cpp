/*

file name:Chapter2exercise6.cpp
GitHub URL: https://github.com/Yaqoob7803/Chapter2Exercise6/blob/main/Chapter2Exercise6.cpp
programmer:Yaqoob Nagi
Date:Feburary 2025
Requirements:

Annual Pay
Suppose an employee gets paid every two weeks and earns $2,200 each pay period.
In a year, the employee gets paid 26 times. Write a program that defines the following variables:
The program should calculate the employee's total annual pay by multiplying the employee's pay amount
by the number of pay periods in a year and store the result in the annualPay variable. Display the total annual pay on the screen.
*/
#include <iostream>
using namespace std;


int main()
{
    double payAmount = 2200.00;
    int payPeriods = 26;
    double annualPay;
    annualPay = payAmount * payPeriods;


    cout << "The employee's total annual pay is: $" << annualPay << "/n";
   

    return 0;
}
