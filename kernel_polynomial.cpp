#include "kernel_polynomial.h"
#include <eigen3/unsupported/Eigen/MatrixFunctions>
#include <cmath>
using namespace Eigen;

Kernel_Polynomial::Kernel_Polynomial(float *supp_vector,const float &bias,float *Alpha_Labels, const float degree,const float coeff, const float gamma):
      S_SVM(supp_vector,bias,Alpha_Labels),degree(degree),coeff(coeff),Gamma(gamma)
{

}

void Kernel_Polynomial::matrix_power(float power,Result &matrix){
    for(int i=0; i<matrix.rows();i++)
        for (int j=0;j<matrix.cols();j++)
        {
            float result=0;
            result=matrix(i,j);
            result=pow(result,power);
            matrix(i,j)=result;
        }
}
void Kernel_Polynomial:: kernel_function(const Datatype &data, Result &result)
{

   result=Supp_vecc*data*Gamma;
   for(int i=0; i<result.rows();i++)
       for (int j=0;j<result.cols();j++)
       {
           float sum=0;
           sum=result(i,j);
           sum+=coeff;
           result(i,j)=sum;
       }
 matrix_power(degree,result);

}
