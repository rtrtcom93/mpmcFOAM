#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

void matinfo(vector<vector<double>> matrix);
void matdisp(vector<vector<double>> matrix);
vector<double> scalar_prod(double a, vector<double> A); 
vector<double> scalar_prod(vector<double> A, double a); 
double inner_prod(vector<double> A, vector<double> B); 
vector<vector<double>> outer_prod(vector<double> A, vector<double> B); 
vector<double> matmul(vector<vector<double>> A, vector<double> B);
vector<vector<double>> matmul(vector<vector<double>> A, vector<vector<double>> B);
vector<vector<double>> transpose(vector<vector<double>> matrix);

int main(int argc, char* argv[]) {

    vector<vector<double>> mat_A
    {
        {1, 2, 4},
        {2, 6, 0}
    }; 
    
    vector<vector<double>> mat_B
    {
        {4, 1, 4, 3},
        {0, -1, 3, 1},
        {2, 7, 5, 2}

    }; 

    vector<double> vec_A {4, 0, 2};


    return 0;
}

void matinfo(vector<vector<double>> matrix) {
    cout << "n X m = " << matrix.size() << "X" <<  matrix[0].size() << endl;
};

void matdisp(vector<vector<double>> matrix) {
    for (size_t i = 0; i < matrix.size(); i++){
        for (size_t j = 0; j < matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
};

vector<double> scalar_prod(double a, vector<double> vec) {
    
    vector<double> result (vec.size());

    for (size_t j = 0; j < vec.size(); j++) {
        result[j] = a*vec[j];
    }

    return result;
};

vector<double> scalar_prod(vector<double> vec, double a) {
    
    vector<double> result (vec.size());

    for (size_t j = 0; j < vec.size(); j++) {
        result[j] = a*vec[j];
    }

    return result;
};

double inner_prod(vector<double> A, vector<double> B) {
    if (A.size() != B.size()) {
        throw invalid_argument("Vector sizes do not match for multiplication.");
    }

    double result {0};

    for (size_t j = 0; j < A.size(); j++) {
        result += A[j]*B[j];
    }

    return result;
};

vector<vector<double>> outer_prod(vector<double> A, vector<double> B) {

    vector<vector<double>> result (A.size(), vector<double> (B.size()));

    for (size_t i = 0; i < A.size(); i++) {
        for (size_t j = 0; j < B.size(); j++) {
            result[i][j] += A[i]*B[j];
        }
    }

    return result;
};

vector<double> matmul(vector<vector<double>> A, vector<double> B) {
    
    if (A[0].size() != B.size()) {
        throw invalid_argument("Matrix sizes do not match for multiplication.");
    }
    
    vector<double> C (A.size());

    for (size_t i = 0; i < A.size(); i++) {
            C[i] = inner_prod(A[i], B);
    }

    return C;
};

vector<vector<double>> matmul(vector<vector<double>> A, vector<vector<double>> B) {

    if (A[0].size() != B.size()) {
        throw invalid_argument("Matrix sizes do not match for multiplication.");
    }

    vector<vector<double>> C(A.size(), vector<double> (B[0].size()));

    for (size_t i = 0; i < A.size(); i++) {
        for (size_t k = 0; k < B[0].size(); k ++) {
            for (size_t j = 0; j < A[0].size(); j ++) {
                C[i][k] = A[i][j]*B[j][k];
            }
        }
    }

    return C;
};

vector<vector<double>> transpose(vector<vector<double>> matrix) {
    vector<vector<double>> matrix_T (matrix[0].size(),vector<double> (matrix.size()));

    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[0].size(); j++) {
            matrix_T[j][i] = matrix[i][j];
        }
    }

    return matrix_T;
};