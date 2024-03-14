#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    vector<vectorint> data;

public:
    
    Matrix(const vector<vector<int>>& input) : data(input) {}

    Matrix operator+(const Matrix& other) const {
        if (data.size() != other.data.size() || data[0].size() != other.data[0].size()) {
            cerr << "Error: Matrix dimensions mismatch!" << endl;
            exit(1);
        }

        vector<vector<int>> result(data.size(), vector<int>(data[0].size(), 0));
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[0].size(); ++j) {
                result[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return Matrix(result);
    }

    Matrix operator-(const Matrix& other) const {
        if (data.size() != other.data.size() || data[0].size() != other.data[0].size()) {
            cerr << "Error: Matrix dimensions mismatch!" << endl;
            exit(1);
        }

        vector<vector<int>> result(data.size(), vector<int>(data[0].size(), 0));
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[0].size(); ++j) {
                result[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return Matrix(result);
    }

    Matrix operator*(const Matrix& other) const {
        if (data[0].size() != other.data.size()) {
            cerr << "Error: Matrix dimensions mismatch for multiplication!" << endl;
            exit(1);
        }

        vector<vector<int>> result(data.size(), vector<int>(other.data[0].size(), 0));
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < other.data[0].size(); ++j) {
                for (size_t k = 0; k < data[0].size(); ++k) {
                    result[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return Matrix(result);
    }

    void display() const {
        for (const auto& row : data) {
            for (int num : row) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    
    Matrix mat1({{1, 2, 3}, {4, 5, 6}});
    Matrix mat2({{7, 8}, {9, 10}, {11, 12}});

    cout << "Matrix 1:" << endl;
    mat1.display();
    cout << "Matrix 2:" << endl;
    mat2.display();

    cout << "Matrix Addition:" << endl;
    (mat1 + mat2).display();

    cout << "Matrix Subtraction:" << endl;
    (mat1 - mat2).display();

    cout << "Matrix Multiplication:" << endl;
    (mat1 * mat2).display();

    return 0;
}

