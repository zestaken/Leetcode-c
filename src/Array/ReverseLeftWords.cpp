#include <iostream>
using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        for(int i = 0; i < n; i++) {
            cout << s[i] << endl;
        }
    }
};

int main() {
    Solution solution;
    string s = "test";
    string s1 = solution.reverseLeftWords(s, s.length());
}