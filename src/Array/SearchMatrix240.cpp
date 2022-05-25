#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // pay attention to the row and column , the one denote the row is first, and the column is second
        // because we want to know the direction to search the matrix, so we need to konw how to turn when target is less or greater
        // search from the top right corner
        // if target is less than the concurrent element, then search the left 
        // if target is greater than the concurrent element, then search the below
        int i = 0;
        int j = matrix[0].size() - 1;
        int len1 = matrix[0].size();
        int len2 = matrix.size();
        while(i < len2 && j >= 0) {
            if(matrix[i][j] == target) {
                return true;
            } else if (matrix[i][j] < target) {
                i++; // turn to below
                continue;
            } else if (matrix[i][j] > target) {
                j--; // turn to left
                continue;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    vector<vector<int>> matrix1 = {{1, 1}};
    bool res = solution.searchMatrix(matrix1, 0);
    if(res) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}