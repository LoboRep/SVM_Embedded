#include "kernel_polynomial.h"

Kernel_Polynomial::Kernel_Polynomial(float supp_vectora[SUPP_VECTOR_LENTH],float supp_vectorb[SUPP_VECTOR_LENTH],const float &bias,float Alpha_Labels[ALPHA_LABLS_LENTH], const int degree,const float coeff):
      S_SVM(supp_vectora,supp_vectorb,bias,Alpha_Labels),degree(degree),coeff(coeff)
{

}

void Kernel_Polynomial:: kernel_function(const Datatype &data, Kernel_Result &result)
{


}
