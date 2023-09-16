//write include statements
#include<iostream>
#include"decisions.h"


using std::cin; using std::cout; using std::string;

int main() {

	int option;
	int grade;
	string result;

	cout<<"Option"<<"\n";
	cout<<"1-Letter grade using if"<<"\n";
    cout<<"2-Letter grade using switch"<<"\n";
	cout<<"3-Exit" <<"\n";
	cout<<"Enter a value between 1-3: "<<"\n";
	cin>>option;

	if(option == 1 ){

		cout<<"Enter a value(1-100): ";
		cin>>grade;

		if(grade >= 0 && grade<= 100){
			result = get_letter_grade_using_if(grade);
			cout<<"Letter Grade: "<<result<<"\n";
		}
		else{
			cout<<"Number is out of range (0-100)." <<"\n";
		}

	} 
	else if(option == 2){

		cout<<"Enter a value(1-100): ";
		cin>>grade;

		if(grade >= 0 && grade<= 100){
			result = get_letter_grade_using_switch(grade);
			cout<<"Letter Grade: "<<result<<"\n";
		}
		else{
			cout<<"Number is out of range (0-100)." <<"\n";
		}

	}
	else if(option == 3){

		cout<<"Exiting Program"<<"\n";

	}

	else{

		cout<<"Invalid Choice select 1, 2, or 3"<<"\n";
	}
	
	return 0;
}