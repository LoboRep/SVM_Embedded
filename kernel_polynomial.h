#ifndef KERNEL_POLYNOMIAL_H
#define KERNEL_POLYNOMIAL_H
#include "S_SVM.h"
class Kernel_Polynomial : public S_SVM
{
       const float degree;
    const float coeff;
   const float Gamma;
void matrix_power(float power,Result &matrix);
public:
    Kernel_Polynomial(float *supp_vector,const float &bias,float *Alpha_Labels, const float degree,const float coeff, const float gamma);
     void kernel_function(const Datatype &data, Result &result);
};

#endif // KERNEL_POLYNOMIAL_H
