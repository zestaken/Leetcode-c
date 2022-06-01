#include <iostream>

using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string res; 
        for(int i = 0; i < address.length(); i++) {
            if(address[i] == '.') {
                res.push_back('[');
                res.push_back('.');
                res.push_back(']');
            } else {
                res.push_back(address[i]);
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    string res = s.defangIPaddr("127.0.0.1");
    cout << res << endl;
}