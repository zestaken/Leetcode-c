#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        if(n == 0) return s;
        char temp[s.length()];

        for(int i = n; i < s.length(); i++) {
            temp[i-n] = s[i];
    }
        for(int i = 0; i < n; i++) {
            temp[s.length() - n + i] = s[i];
        }
    string res;
    for(int i = 0; i < s.length(); i++) {
        res += temp[i];
    }
    return res;
}
};

int main() {
    Solution solution;
    string s = "abcdefg";
    string s1 = solution.reverseLeftWords(s, 2);
    for(int i = 0; i < s1.length(); i++) {
        cout << s1[i] << endl;
    }
}