#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

void matinfo(vector<vector<double>> matrix);
void matdisp(vector<double> vector);
void matdisp(vector<vector<double>> matrix);
vector<double> scalar_prod(double a, vector<double> A); 
vector<double> scalar_prod(vector<double> A, double a);
vector<vector<double>> scalar_prod(double a, vector<vector<double>> matrix);
vector<vector<double>> scalar_prod(vector<vector<double>> matrix, double a);
vector<vector<double>> matadd(vector<vector<double>> A, vector<vector<double>> B);
vector<vector<double>> matsub(vector<vector<double>> A, vector<vector<double>> B);
double inner_prod(vector<double> A, vector<double> B);
double inner_prod(vector<vector<double>> A, vector<vector<double>> B); 
vector<vector<double>> outer_prod(vector<double> A, vector<double> B); 
vector<double> matmul(vector<vector<double>> A, vector<double> B);
vector<vector<double>> matmul(vector<vector<double>> A, vector<vector<double>> B);
vector<vector<double>> transpose(vector<vector<double>> matrix);
double trace(vector<vector<double>> matrix);

int main(int argc, char* argv[]) {

    vector<vector<double>> mat_A
    {
        {3, 0},
        {-1, 2},
        {1, 1}
    }; 
    
    vector<vector<double>> mat_B
    {
        {2, 1},
        {-3, 1},
        {4, 0}
    }; 
    
    vector<vector<double>> mat_C
    {
        {1, 0},
        {3, -1}
    }; 

    vector<vector<double>> mat_D
    {
        {1, 1},
        {-3, 3}
    }; 
    
    vector<vector<double>> mat_E
    {
        {1, 4, 2},
        {3, 1, 5}
    }; 

    vector<vector<double>> mat_F
    {
        {1, 5, 2},
        {-1, 0, 1},
        {3, 2, 4}
    };

    vector<vector<double>> mat_G
    {
        {6, 1, 3},
        {-1, 1, 2},
        {4, 1, 3}
    }; 
    
    cout << "5. ================" << endl;
    cout << "a." << endl;
    matdisp(matadd(mat_A, scalar_prod(2, mat_B)));
    cout << "c." << endl;
    matdisp(matsub(scalar_prod(4, mat_D), scalar_prod(3, transpose(mat_C))));
    cout << "d." << endl;
    matdisp(matsub(mat_D, transpose(mat_D)));
    cout << "e." << endl;
    matdisp(matadd(mat_G, transpose(scalar_prod(2, mat_F))));

    cout << "6. ================" << endl;
    cout << "a." << endl;
    matdisp(matadd(mat_D, scalar_prod(3, mat_C)));
    cout << "b." << endl;
    matdisp(matsub(mat_E, transpose(mat_A)));
    cout << "c." << endl;
    matdisp(matsub(scalar_prod(4, mat_C), scalar_prod(5, transpose(mat_D))));
    cout << "d." << endl;
    matdisp(matsub(mat_F, transpose(mat_F)));
    cout << "e." << endl;
    matdisp(matadd(mat_B, transpose(scalar_prod(4, mat_E))));

    cout << "7. ================" << endl;
    cout << "a." << endl;
    matdisp(matmul(mat_C, mat_D));
    cout << "b." << endl;
    matdisp(matmul(mat_A, mat_E));
    cout << "c." << endl;
    matdisp(matmul(mat_F, mat_G));
    cout << "d." << endl;
    matdisp(matmul(transpose(mat_B), mat_F));
    cout << "e." << endl;
    matdisp(matmul(mat_B, transpose(mat_B)));
    
    cout << "8. ================" << endl;
    cout << "a." << endl;
    matdisp(matmul(mat_G, mat_A));
    cout << "b." << endl;
    matdisp(matmul(mat_F, mat_B));
    cout << "c." << endl;
    matdisp(matmul(mat_G, mat_F));
    cout << "d." << endl;
    matdisp(matmul(transpose(mat_A), mat_G));
    cout << "e." << endl;
    matdisp(matmul(transpose(mat_E), mat_E));
    
    cout << "9. ================" << endl;
    cout << "a." << endl;
    vector<double> vec_x {2, -1, 3};
    mat_A=
    {
        {1, 5, 2},
        {-4, 9, 1},
        {2, 0, 3}
    };
    matdisp(matmul(mat_A, vec_x));
    cout << "b." << endl;
    vec_x = {4, 5, -2};
    mat_A=
    {
        {2, 4, 1},
        {-3, 9, 0},
        {3, -1, 2}
    };
    matdisp(matmul(mat_A, vec_x));
    
    cout << "15. ================" << endl;
    mat_A = 
    {
        {3, -2, 7},
        {6, 5, 4},
        {0, 4, 9}
    };

    mat_B = 
    {
        {6, -2, 4},
        {0, 1, 3},
        {7, 7, 5}
    };
    cout << "(AB)_{23} = " << matmul(mat_A, mat_B)[2][3] << endl;
    
    cout << "16. ================" << endl;
    cout << "(BA)_{21} = " << matmul(mat_B, mat_A)[2][1] << endl;

    cout << "17. ================" << endl;
    cout << "a." << endl; 
    cout << "AB_1st_row = ";
    matdisp(matmul(mat_A, mat_B)[0]);
    cout << "b." << endl; 
    cout << "AB_3rd_row = ";
    matdisp(matmul(mat_A, mat_B)[2]);
    cout << "c." << endl; 
    cout << "AB_1st_col = ";
    matdisp(transpose((matmul(mat_A, mat_B)))[1]);

    cout << "18. ================" << endl;
    cout << "a." << endl; 
    cout << "BA_1st_row = ";
    matdisp(matmul(mat_B, mat_A)[0]);
    cout << "b." << endl; 
    cout << "BA_3rd_row = ";
    matdisp(matmul(mat_B, mat_A)[2]);
    cout << "c." << endl; 
    cout << "BA_1st_col = ";
    matdisp(transpose((matmul(mat_B, mat_A)))[1]);

    cout << "19. ================" << endl;
    cout << "a. " << trace(mat_A) << endl;
    cout << "b. " << trace(transpose(mat_A)) << endl;
    cout << "c. " << trace(matmul(mat_A, mat_B))-trace(mat_A)*trace(mat_B) << endl;

    cout << "20. ================" << endl;
    cout << "a. " << trace(mat_B) << endl;
    cout << "b. " << trace(transpose(mat_B)) << endl;
    cout << "c. " << trace(matmul(mat_B, mat_A))-trace(mat_B)*trace(mat_A) << endl;
    


    return 0;
}

void matinfo(vector<vector<double>> matrix) {
    cout << "n X m = " << matrix.size() << "X" <<  matrix[0].size() << endl;
};

void matdisp(vector<double> vector) {
    cout << "[ ";
    for (size_t i = 0; i < vector.size(); i++){
        cout << vector[i]<< " ";
    }
    cout << "]" << endl;
};

void matdisp(vector<vector<double>> matrix) {
    for (size_t i = 0; i < matrix.size(); i++){
        cout << "[ ";
        for (size_t j = 0; j < matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << "]" << endl;
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

vector<vector<double>> scalar_prod(double a, vector<vector<double>> matrix) {
    
    vector<vector<double>> result (matrix.size(), vector<double> (matrix[0].size()));

    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[0].size(); j++) {
            result[i][j] = a*matrix[i][j];
        }
    }

    return result;
};

vector<vector<double>> scalar_prod(vector<vector<double>> matrix, double a) {
    
    vector<vector<double>> result;

    result = scalar_prod(a, matrix);

    return result;
};

vector<vector<double>> matadd(vector<vector<double>> A, vector<vector<double>> B) {
    if ((A.size() != B.size()) || (A[0].size() != B[0].size())) {
        throw invalid_argument("Matrix sizes do not match for addition.");
    }  

    vector<vector<double>> result (A.size(), vector<double> (A[0].size()));

    for (size_t i = 0; i < A.size(); i++) {
        for (size_t j=0; j < A[0].size(); j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    return result;
}

vector<vector<double>> matsub(vector<vector<double>> A, vector<vector<double>> B) {
    if ((A.size() != B.size()) || (A[0].size() != B[0].size())) {
        throw invalid_argument("Matrix sizes do not match for addition.");
    }  

    vector<vector<double>> result; 

    result = matadd(A, scalar_prod(-1, B));

    return result;
}

double inner_prod(vector<double> A, vector<double> B) {
    if (A.size() != B.size()) {
        throw invalid_argument("Vector sizes do not match for inner product.");
    }

    double result {0};

    for (size_t j = 0; j < A.size(); j++) {
        result += A[j]*B[j];
    }

    return result;
};

double inner_prod(vector<vector<double>> A, vector<vector<double>> B) {
    if ((A.size() != B.size()) || (A[0].size() != B[0].size())) {
        throw invalid_argument("Matrix sizes do not match for inner product.");
    }

    double result {0};
    for (size_t i =0; i < A.size(); i++) {
        for (size_t j = 0; j < A[0].size(); j++) {
            result += A[i][j]*B[i][j];
        }
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
    
    vector<double> result (A.size());

    for (size_t i = 0; i < A.size(); i++) {
            result[i] = inner_prod(A[i], B);
    }

    return result;
};

vector<vector<double>> matmul(vector<vector<double>> A, vector<vector<double>> B) {

    if (A[0].size() != B.size()) {
        throw invalid_argument("Matrix sizes do not match for multiplication.");
    }

    vector<vector<double>> C(A.size(), vector<double> (B[0].size()));

    for (size_t i = 0; i < A.size(); i++) {
        for (size_t k = 0; k < B[0].size(); k ++) {
            for (size_t j = 0; j < A[0].size(); j ++) {
                C[i][k] += A[i][j]*B[j][k];
            }
        }
    }

    return C;
};

double trace(vector<vector<double>> matrix) {

    size_t m {matrix.size()};
    size_t n {matrix[0].size()};
    size_t ii {(m < n) ? m : n};

    double result{0};
    for (size_t i=0; i < ii; i ++) {
        result += matrix[i][i];
    }

    return result;
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