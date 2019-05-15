#pragma once
#include <vector>
#include <eigen3/Eigen/Core>
#include "parameters.h"
using namespace std;
using namespace Eigen;
typedef Matrix<float,SUPP_VECTOR_LENTH,SUPP_VECTOR_NUMB> MyMatrixType;
typedef Matrix<float,1,ALPHA_LABLS_LENTH> Alpha_Type;
typedef Matrix<float,SUPP_VECTOR_NUMB,1> Datatype;
typedef Matrix<float,SUPP_VECTOR_LENTH,1> Kernel_Result;
typedef Matrix<float,1,1> Bias_Matrix;
typedef Matrix<float,Dynamic,Dynamic> Result;
enum errors{BAD_DIMENTION};
class S_SVM
{
    const Bias_Matrix Bias;
    Alpha_Type Alpha_Labels;
	void matrix_mult(const vector <vector <float>> matrix_A, const vector <vector <float>> matrix_B, const vector <vector <float>> matrix_Result);
	void array_mult(const vector <float> vector_A, const vector  <float> vector_B, vector <float> vector_Result);
    virtual void kernel_function(const Datatype &data, Result &result)=0;
protected:
     MyMatrixType Supp_vecc;
public:
    S_SVM(float *supp_vector,const float &bias,float *Alpha_Labels);
    char S_SVM_Class(float *data_in);
	~S_SVM();
};


