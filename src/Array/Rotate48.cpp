#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int times = 0;
        int n = matrix.size();

        while(times <= (n / 2))  {
            int len = n - times * 2;
            //从每一圈的第一个元素开始，依次移动一位，总共需要移动该圈的长度-1的位数即可达到旋转90度的效果(把每四个在对称位置的元素看作一组，如1，3，9，7)
            for(int i = 0; i < len - 1; i++) {
                int temp = matrix[times][times + i]; //确定这一圈的领头元素
                matrix[times][times + i] = matrix[times + len - 1 - i][times];
                matrix[times + len - 1 - i][times] = matrix[times + len - 1][times + len - 1 - i];
                matrix[times + len - 1][times + len - 1 - i] = matrix[times + i][times + len - 1];
                matrix[times + i][times + len - 1] = temp;
                }
            times++;
        }
    }
};

int main() {
    vector<vector<int> > matrix = {
                                    {1, 2, 3},
                                    {4, 5, 6},
                                    {7, 8, 9}
                                    };
    Solution solution;
    solution.rotate(matrix);
    for (int i = 0; i < matrix.size();i++) {
        for(int j = 0; j < matrix.size();j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}