#include "kernel_rbf.h"
#include <eigen3/unsupported/Eigen/MatrixFunctions>
#include <cmath>
Kernel_RBF::Kernel_RBF(float* supp_vector,const float &bias,float *Alpha_Labels, const float gamma):
      S_SVM(supp_vector,bias,Alpha_Labels),Gamma(gamma)
{

}
void Kernel_RBF::Euclidean_distance(const Datatype &data,Result &matrix){

   Kernel_Result result_matrix;
   for(int j=0;j<SUPP_VECTOR_LENTH;j++){
         float result=0;
    for(int i=0; i<SUPP_VECTOR_NUMB;i++)
    {
        float aux=0;
        aux=Supp_vecc(j,i);
        aux=aux-data(i,0);
        result+=pow(aux,2);
    }
    result_matrix(j,0)=sqrt(result);
   }
matrix=result_matrix;
}
void Kernel_RBF:: kernel_function(const Datatype &data, Result &result)
{
Euclidean_distance(data,result);
result=-Gamma*result;
for(int i=0;i<SUPP_VECTOR_LENTH;i++)

    result(i,0)=exp(result(i,0));

}
