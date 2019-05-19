#include <iostream>
#include<cmath>
#include "kernel_linear.h"
#include "kernel_polynomial.h"
#include "kernel_rbf.h"

int main() {
   float vectora [SUPP_VECTOR_NUMB][SUPP_VECTOR_LENTH]={SUPP_VECTORA,SUPP_VECTORB,SUPP_VECTORC};
    float vectorc[]= ALPHA_LABELS;
    float samples [][4]={SAMPLE_MATRIX};
    int acuracy;
    float perc_acuracy;
    Kernel_RBF data_class (&vectora[0][0],BIAS,vectorc,GAMMA);
    int result=0;
    for(int sample=0;sample<NUMBER_SAMPLES;sample++)
    {
    result=data_class.S_SVM_Class(&samples[sample][0]);
    cout<<"res"<<sample<<":"<<result<<endl;
    if(result==samples[sample][3])
        acuracy++;
    }
    perc_acuracy=acuracy;
    perc_acuracy/=NUMBER_SAMPLES;
    perc_acuracy*=100;
    cout<<"Accuracy_RBF:"<<perc_acuracy<<"%"<<endl;
}
