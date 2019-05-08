#include <iostream>
#include<cmath>
#include "S_SVM.h"

int main() {
   float vectora []=SUPP_VECTORA;
    float vectorb[]=  SUPP_VECTORB;
    float vectorc[]= ALPHA_LABELS;
    float samples [][3]=SAMPLE_MATRIX;
    S_SVM data_class (vectora, vectorb,BIAS,vectorc);
    int result=0;
    for(int sample=0;sample<NUMBER_SAMPLES;sample++)
    {
    result=data_class.S_SVM_Class(samples[sample][0],samples[sample][1]);
    cout<<"res"<<sample<<":"<<result<<endl;
    }
}
