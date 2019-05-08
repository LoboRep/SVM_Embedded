#ifndef KERNEL_POLYNOMIAL_H
#define KERNEL_POLYNOMIAL_H
#include "S_SVM.h"

class Kernel_Polynomial : public S_SVM
{
    const int degree;
    const float coeff;
public:
    Kernel_Polynomial(float supp_vectora[SUPP_VECTOR_LENTH],float supp_vectorb[SUPP_VECTOR_LENTH],const float &bias,float Alpha_Labels[ALPHA_LABLS_LENTH], const int degree,const float coeff);
     void kernel_function(const Datatype &data, Kernel_Result &result);
};

#endif // KERNEL_POLYNOMIAL_H
