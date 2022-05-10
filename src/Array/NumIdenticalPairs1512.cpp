#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            if( i  + 1 >= nums.size() ) {
                break;
            }
            for( int j = i + 1; j < nums.size(); j++ ) {
                if(nums[j] == temp) {
                    res++;
                }
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    int res = s.numIdenticalPairs(nums);
    cout << res << endl;
}