//add include statements
#include"func.h"
#include <string>
#include <iostream>


using std:: string;

//add function code here
double get_gc_content(const std :: string& dna){


        double gc_count = 0;
        double dna_sequence = dna.length();


        for (int i = 0; i < dna_sequence; i++) {

            std::string::value_type dna_base = dna[i];

            if ( dna_base == 'G' || dna_base == 'C') {
                gc_count++;
            }
        }


    double gc_content = ((gc_count) / dna_sequence) * 100.0;
    return gc_content;
}

//std :: string get_dna_complement(string dna){
//string reverse_complement = "";

  //  for (int i = dna.length() - 1; i >= 0; i--) {
    //    char base = dna[i];
      //  char complement;

        //switch (base) {
          //  case 'A':
            //    complement = 'T';
              //  break;
            //case 'T':
            //    complement = 'A';
            //    break;
            //case 'C':
            //    complement = 'G';
            //    break;
            //case 'G':
            //    complement = 'C';
            //    break;
            //default:
                
            //    complement = base;
            //    break;
       // }

      //  reverse_complement += complement;
   // }

 //   return reverse_complement;
//}
