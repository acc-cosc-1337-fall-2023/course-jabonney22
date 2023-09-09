//write include statements
#include "hwexpressions.h"
#include<iostream>

using std::cout; using std::cin;

//write namespace using statement for cout

int main()
{
	double meal_amount; //create a variable
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

// Use the cin object to capture the number from the keyboard, assign the number to meal_amount

	cout<<"Enter a value: ";
	cin>>meal_amount;

// Call the get_sales_tax_amount with meal_amount as its parameter
	tax_amount = get_sales_tax_amount(meal_amount);

// Capture the tip rate from keyboard and assign the value to tip_rate variable.

	cout<<"Enter the tip rate: ";
	cin>>tip_rate;

// Call the function get_tip_amount with meal_amount and tip_rate as its parameters, 
// set function get_tip_amount return value to tip_amount.	

	tip_amount = get_tip_amount(meal_amount, tip_rate);

// Add tip_amount, tax_amount and meal_amount , and save result to total variable.

	total = tip_amount + tax_amount + meal_amount;

	cout<<"Meal Amount: "<< meal_amount <<"\n";
	cout<<"Sales Tax: "<< tax_amount <<"\n";
	cout<<"Tip Amount: "<< tip_amount <<"\n";
	cout<<"Total: "<< total <<"\n";

	return 0;
}
