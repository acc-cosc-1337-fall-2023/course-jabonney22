#include "val_ref.h"

using std:: cout;

void ref_param(int &num){

    num = 20;

}

void const_ref_param(const int &num){

    cout<< "const int &num is avalible in read only mode: "<<num<< "\n";
    //num = 20;


}