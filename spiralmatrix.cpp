#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
        int direction = 0;

        while (top <= bottom && left <= right) {
            if (direction == 0) {
                // left to right
                for (int col = left; col <= right; col++) {
                    result.push_back(matrix[top][col]);
                }
                top++;
            }
            else if (direction == 1) {
                // top to bottom
                for (int row = top; row <= bottom; row++) {
                    result.push_back(matrix[row][right]);
                }
                right--;
            }
            else if (direction == 2) {
                // right to left
                for (int col = right; col >= left; col--) {
                    result.push_back(matrix[bottom][col]);
                }
                bottom--;
            }
            else if (direction == 3) {
                // bottom to top
                for (int row = bottom; row >= top; row--) {
                    result.push_back(matrix[row][left]);
                }
                left++;
            }

            direction = (direction + 1) % 4;
        }

        return result;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> matrix = {
        {1,  2,  3},
        {4,  5,  6},
        {7,  8,  9}
    }; //Spiral Order: 1 2 3 6 9 8 7 4 5


    vector<int> result = sol.spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
