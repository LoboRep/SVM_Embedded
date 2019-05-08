#include "kernel_linear.h"

Kernel_Linear:: Kernel_Linear(float supp_vectora[SUPP_VECTOR_LENTH],float supp_vectorb[SUPP_VECTOR_LENTH],const float &bias,float Alpha_Labels[ALPHA_LABLS_LENTH]):
    S_SVM(supp_vectora,supp_vectorb,bias,Alpha_Labels)
{

}

void Kernel_Linear:: kernel_function(const Datatype &data, Kernel_Result &result)
{

    result=Supp_vecc*data;
}
