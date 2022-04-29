#include <vector>
#include <iostream>
using namespace std;

class Resort {
public:
    //传值只有指针，则必须将数组长度传入，光靠指针无法知道数组长度
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        for(int i = 0; i < n; i++) {
            res.push_back(nums[i]);
            res.push_back(nums[i + n]);
        }
        return res;
    }
};

int main() {
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    Resort resort;
    vector<int> res = resort.shuffle(nums, 3);
    for(int i = 0; i < nums.size(); i++) {
        cout << res[i] << endl;
    }
}