//add include statements
#include"func.h"
#include <string>


//add function code here
void get_gc_content(const string& dna){

    double gc_content = 0;
    const string& dna = string;


    for(dna = 'A' || 'T' || 'G' || 'C' ){

        cout<<"Please enter a string:";
        cin>>dna;

        if(dna == "C" || dna == "G"){

            gc_content ++;
        }
    }

    double gc_content = (static_cast<double>(gc_content) / dna.length()) * 100.0;

    return gc_content;
}
