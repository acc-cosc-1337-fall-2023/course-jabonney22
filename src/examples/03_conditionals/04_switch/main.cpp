#include<iostream>
#inlcude<switch.h>

using std:: cout; using std:: cin

int main() 
{

	auto option = 0;
	cout<<"Enter a number: ";
	cin>>option;
	
	string result = menu(option);
	cout<<result<<"\n"

	return 0;
}
