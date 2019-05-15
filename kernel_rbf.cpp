#include "kernel_rbf.h"

Kernel_RBF::Kernel_RBF(float* supp_vector,const float &bias,float *Alpha_Labels, const float gamma):
      S_SVM(supp_vector,bias,Alpha_Labels),Gamma(gamma)
{

}
void Kernel_RBF:: kernel_function(const Datatype &data, Result &result)
{

}
