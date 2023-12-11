#include <iostream>
#include <vector>

using namespace std;

vector<vector<vector<double>>> Vec3d(size_t nx, size_t ny, size_t nz) {
    vector<double> x (nx);
    vector<vector<double>> y (ny, x);
    vector<vector<vector <double>>> z (nz, y);

    return z;
} 

int main(int argc, char *argv[]) {

    const size_t nx {4};
    const size_t ny {4};
    const size_t nz {4};


    vector<vector<vector <double>>> vector_3d;
    vector_3d = Vec3d(nx, ny, nz);

    for (size_t i = 0; i < vector_3d.size(); i++)
    {
        for (size_t j = 0; j < vector_3d[i].size(); j++)
        {
            for (size_t k = 0; k < vector_3d[i][j].size(); k++)
            {
                cout << vector_3d[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }



    return 0;
}