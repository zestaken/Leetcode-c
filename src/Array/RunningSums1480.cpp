#include <iostream>

using namespace std;

int* runningSums(int nums[], int n) {
    int length = n;
    int* sums;
    sums[0] = nums[0];
    for(int i = 1; i < n; i++) {
        sums[i] = nums[i] + sums[i - 1];
    }
    return sums;
}

int main() {
    int nums[3] = {1, 2, 3};
    int* sums = runningSums(nums, 3);
    for(int i = 0; i < 3; i++) {
        cout << sums[i] << endl;
    }
}

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

    }
};