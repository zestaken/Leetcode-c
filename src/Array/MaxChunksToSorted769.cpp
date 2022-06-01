#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int max = 0;
        int res = 0;
        for(int i = 0; i < arr.size();i++) {
            if (arr[i] >= max) {
               max = arr[i];
            }
            if(max = i) {
                res++;
            }
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 0, 2, 3, 4};
    cout << solution.maxChunksToSorted(arr) << endl;
}