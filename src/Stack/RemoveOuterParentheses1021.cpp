#include <iostream>
#include <stack>

using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stack1;
        string s1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' && !stack1.empty()) {
                stack1.push(s[i]);
                s1.push_back(s[i]);
            } else if (s[i] == '(' && stack1.empty()) {
                stack1.push('*'); // a "*"  represents a Parentheses on the edge;
            } else if (s[i] == ')' && !stack1.empty()) { 
                char temp = stack1.top();
                stack1.pop();
                if(temp != '*') {
                    s1.push_back(s[i]);
                } 
            }
        }
        return s1;
    }
};

int main() {
    Solution solution;
    string s1 = solution.removeOuterParentheses("(()())");
    string s2 = solution.removeOuterParentheses("(()())(())");
    string s3 = solution.removeOuterParentheses("(()())(())(()(()))");
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
}