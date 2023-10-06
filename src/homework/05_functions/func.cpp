//add include statements
#include"func.h"
#include <string>
#include <iostream>


using std:: string;
using namespace std;

//add function code here
double get_gc_content(const string& dna){


        double gc_count = 0;
        double dna_sequence = dna.length();


        for (int i = 0; i < dna_sequence; i++) {

            string::value_type dna_base = dna[i];

            if ( dna_base == 'G' || dna_base == 'C') {
                gc_count++;
            }
        }


    double gc_content = ((gc_count) / dna_sequence) * 100.0;
    return gc_content;
}

string get_dna_complement(string dna){

  string complement = dna;
  int length = dna.length();

    for (int i = 0; i < length / 2; i++) {
        swap(complement[i], complement[length - i - 1]);
    }
    for (int i = 0; i < length; i++) {
        if (complement[i] == 'A') {
            complement[i] = 'T';
        } else if (complement[i] == 'T') {
            complement[i] = 'A';
        } else if (complement[i] == 'C') {
            complement[i] = 'G';
        } else if (complement[i] == 'G') {
            complement[i] = 'C';
        }

    }

    return complement;

 
 }
