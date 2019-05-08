#ifndef KERNEL_LINEAR_H
#define KERNEL_LINEAR_H
#include "S_SVM.h"

class Kernel_Linear : public S_SVM
{
public:
    Kernel_Linear(float supp_vectora[SUPP_VECTOR_LENTH],float supp_vectorb[SUPP_VECTOR_LENTH],const float &bias,float Alpha_Labels[ALPHA_LABLS_LENTH]);
    void kernel_function(const Datatype &data, Kernel_Result &result);
};

#endif // KERNEL_LINEAR_H
