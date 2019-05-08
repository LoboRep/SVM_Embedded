#include "S_SVM.h"
#include <iostream>


S_SVM::S_SVM(float supp_vectora[SUPP_VECTOR_LENTH],float supp_vectorb[SUPP_VECTOR_LENTH],const float &bias,float Alpha_Labels[ALPHA_LABLS_LENTH]):Bias(bias)
{
        for(int j=0;j<SUPP_VECTOR_LENTH;j++)
        {
          Supp_vecc(j,0)=supp_vectora[j];
           Supp_vecc(j,1)=supp_vectorb[j];
           this->Alpha_Labels(0,j)=Alpha_Labels[j];
        }
}
char S_SVM::S_SVM_Class(float x, float y)
{
    const char Class_Ident[2]=CLASS_IDENT;
    Datatype data;
    data<<x,y;
    Kernel_Result r_kernel;
    kernel_function(data, r_kernel);
    Result res;
    res=Alpha_Labels*r_kernel;
    res=res+Bias;
    if(res(0,0)<=-1)
        return Class_Ident[0];
        else
        return Class_Ident[1];
}
S_SVM::~S_SVM(){

}

void S_SVM:: kernel_function(const Datatype &data, Kernel_Result &result)
{

    result=Supp_vecc*data;
}


