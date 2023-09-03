#include<iostream>
#include"int.h"

using std:: cout;

int main(){

    int num = 5;

    int result = echo_variable(num);
    
    cout<<"Result:" <<result<<"\n";
    cout<<"Num:"<<num<<"\n";

    num = 100;

    cout<<"Num: "<<num<<"\n";

    return 0;
}