#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // create a hash map to store the number of times one number appears
        vector<int> res;
        map<int, int> hash;
        // iterate over the first vector and store the number of times one number appears 
        for(int i = 0; i < nums1.size();i++) {
            //because the default value is 0, so we don't need to care about the key didn't exist
            ++hash[nums1[i]];
        }
        // iterate the another array and compare the value 
        for (int i = 0; i < nums2.size(); i++) {
            if(hash.find(nums2[i])->second != 0 ) {
                res.push_back(nums2[i]);
                --hash[nums2[i]];
            }
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> res = solution.intersect(nums1, nums2);
    for(auto v : res) {
        cout << v << endl;
    }
}
