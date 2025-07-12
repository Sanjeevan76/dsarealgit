#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));

        int top = 0, right = n - 1;
        int bottom = n - 1, left = 0;
        int value = 1;
        int direction = 0;

        while (top <= bottom && left <= right) {
            if (direction == 0) {
                for (int col = left; col <= right; col++) {
                    matrix[top][col] = value++;
                }
                top++;
            } else if (direction == 1) {
                for (int row = top; row <= bottom; row++) {
                    matrix[row][right] = value++;
                }
                right--;
            } else if (direction == 2) {
                for (int col = right; col >= left; col--) {
                    matrix[bottom][col] = value++;
                }
                bottom--;
            } else if (direction == 3) {
                for (int row = bottom; row >= top; row--) {
                    matrix[row][left] = value++;
                }
                left++;
            }
            direction = (direction + 1) % 4;
        }

        return matrix;
    }
};

int main() {
    Solution sol;

    int n = 3;  // You can change this value to test other sizes
    vector<vector<int>> result = sol.generateMatrix(n);

    cout << "Generated Spiral Matrix:" << endl;
    for (auto row : result) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
//Generated Spiral Matrix:
// 1 2 3 
// 8 9 4 
// 7 6 5 