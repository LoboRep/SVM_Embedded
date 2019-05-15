#include "kernel_linear.h"

Kernel_Linear:: Kernel_Linear(float *supp_vector,const float &bias,float *Alpha_Labels):
    S_SVM(supp_vector,bias,Alpha_Labels)
{

}

void Kernel_Linear:: kernel_function(const Datatype &data, Result &result)
{

    result=Supp_vecc*data;
}
