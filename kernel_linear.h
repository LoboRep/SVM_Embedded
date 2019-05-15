#ifndef KERNEL_LINEAR_H
#define KERNEL_LINEAR_H
#include "S_SVM.h"

class Kernel_Linear : public S_SVM
{
public:
    Kernel_Linear(float *supp_vector,const float &bias,float *Alpha_Labels);
    void kernel_function(const Datatype &data, Result &result);
};

#endif // KERNEL_LINEAR_H
