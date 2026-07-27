#include <iostream>
#include <vector>
using namespace std;

class Matrix {
public:
	vector<vector<int>> mat;

	Matrix() {}

	Matrix (vector<vector<int>> m): mat(m) {}

	Matrix operator+ (const Matrix& other) {
		Matrix temp;

		temp.mat.resize(mat.size());

		for (int i = 0; i < mat.size(); i++)
			temp.mat[i].resize(mat[0].size());

		for (int i = 0; i < mat.size(); i++) {
			for (int j = 0; j < mat[0].size(); j++) {
				temp.mat[i][j] = mat[i][j] + other.mat[i][j];
			}
		}

		return temp;
	}

	void print() {
		for (auto& row : mat) {
			for (int x : row)
				cout << x << " ";
			cout << endl;
		}
	}
};



int main () {
	Matrix m1({{1,2},{3,4}});
	Matrix m2({{5,6},{7,8}});

	Matrix m3 = m1 + m2;

	m3.print();

	return 0;
}