#ifndef KERNEL_RBF_H
#define KERNEL_RBF_H
#include <S_SVM.h>

class Kernel_RBF : public S_SVM
{

    const float Gamma;
    public:
       Kernel_RBF(float* supp_vector,const float &bias,float *Alpha_Labels, const float gamma);
         void kernel_function(const Datatype &data, Result &result);

};

#endif // KERNEL_RBF_H
