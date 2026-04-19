#include <iostream>
#include <cstring>
using namespace std;

vector<vector<int>>& grid;

int main () {
	int rows = grid.size();     // Number of inner vectors
	int cols = grid[0].size();  // Size of the first row

	int cols = rows ? grid[0].size() : 0;   // If the grid might be empty,	(Safe)

	vector<vector<int>> grid = {
		{1, 2, 3},
		{4, 5, 6}
	};

	int rows = grid.size();      // 2
	int cols = grid[0].size();   // 3
	
	
	// Loop through grid
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << grid[i][j] << " ";
		}
	}
	
	
	// If rows might have different sizes (jagged array), use:
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[i].size(); j++) {
			// safe access
		}
	}

	return 0;
}

/*

2D Vector: Rows & Columns
	
	Rows 	= Number of inner vectors (No. of elements, elements = vectors)
	Columns = Size of the first row

*/