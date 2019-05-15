#include "S_SVM.h"
#include <iostream>


S_SVM::S_SVM(float *supp_vector,const float &bias,float Alpha_Labels[ALPHA_LABLS_LENTH]):Bias(bias)
{
        for(int j=0;j<SUPP_VECTOR_NUMB;j++)
        {
            for(int i=0;i<SUPP_VECTOR_LENTH;i++)
          Supp_vecc(i,j)=*(supp_vector + j * SUPP_VECTOR_LENTH + i);
         }
        for(int i=0;i<SUPP_VECTOR_LENTH;i++)
      this->Alpha_Labels(0,i)=Alpha_Labels[i];


}
char S_SVM::S_SVM_Class(float *data_in)
{
    const char Class_Ident[2]=CLASS_IDENT;
    Datatype data;
    for(int i=0;i<SUPP_VECTOR_NUMB;i++)
        data(i,0)=*(data_in+i);
    Result r_kernel;
    kernel_function(data, r_kernel);
    Result res;
    res=Alpha_Labels*r_kernel;
    res=res+Bias;
    if(res(0,0)<=0)
        return Class_Ident[0];
        else
        return Class_Ident[1];
}
S_SVM::~S_SVM(){

}



