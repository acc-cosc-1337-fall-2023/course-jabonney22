#include<iostream>
#include"func.h"

using std::cin; using std::cout; using std::string;

int main() 
{
	int option;
    string dna;
    int result;
    char complement = dna_sequence;

	if (option == 1){

        cout<<"Enter a DNA string: ";
        cin>>dna;

        result = get_gc_content(dna);
        cout<<"The gc content of DNA "<<dna<<" is: "<<result<<"\n";
    
    }
    else if(option == 2){

        cout<<"Enter a DNA string: ";
        cin>>dna;

        result = get_dna_complement(dna_sequence);
        cout<<"The complement of the DNA "<<dna<<" is: "<<result<<"\n";

    }


	return 0;
}



