#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
// 利用数组的值可以与数组下标对应
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        for(int t : nums) {
            // 先遍历数组，获取每一个值，在通过值去找到对应的下标，然后对下标对应位置做一定处理方便辨识这个下标对应的值已经出现
            //但是修改数组值不能影响通过值确定唯一的下标，所以通过加上长度取余运算（因为数组中的值都是大于等于1小于等于n的才可以这样处理）
            int index = (t - 1) % nums.size();
            nums[index] += nums.size();
        }
        for(int i = 0; i < nums.size();i++) {
            //凡是值超过了数组长度的，说明这个下标对应的值在数组中存在
            if(nums[i] <= nums.size()) {
                res.push_back(i + 1);
            } 
        }
       return res;
    }
};

int main() {
    vector<int> input = {4,3,2,7,8,2,3,1};
    Solution solution;
    vector<int> res = solution.findDisappearedNumbers(input);
    for(int i : res) {
        cout << i << endl;
    }
}