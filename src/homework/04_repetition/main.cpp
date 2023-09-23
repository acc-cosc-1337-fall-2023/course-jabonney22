//write include statements
#include<iostream>
#include"repetition.h"

//write using statements

using std::cin; using std::cout; using std::string; 

int main() {

    int option;
    int number;
    int number1;
    int number2;
    int result;

do {

    cout<<"Option"<<"\n";
	cout<<"1-Factorial"<<"\n";
    cout<<"2-Greatest Common Divisor"<<"\n";
	cout<<"3-Exit" <<"\n";
	cout<<"Enter a value between 1-3: "<<"\n";
	cin>>option;

    if (option == 1){

        cout<<"Enter a number: ";
        cin>>number;

        result = factorial(number);
        cout<<"Factorial of "<<number<<" is: "<<result<<"\n";
    
    }

    else if(option == 2){

        cout<<"Enter the first number: ";
        cin>>number1;

        cout<<"Enter the second number: ";
        cin>>number2;

        result = gcd(number1 , number2);
        cout<<"Greatest common divisor of "<<number1<<"and"<<number2<<" is: "<<result<<"\n";
    
    }

    break;

} while (option == 1 || 2 || 3);

	return 0;
}





	