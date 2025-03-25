#include<iostream>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                p.push(s[i]);
            } else {
                if (p.empty()) { 
                    return false; 
                } else if (s[i] == ')' && p.top() == '(') {
                    p.pop();
                } else if (s[i] == ']' && p.top() == '[') {
                    p.pop();
                } else if (s[i] == '}' && p.top() == '{') {
                    p.pop();
                } else {
                    return false;
                }
            }
        }

        return p.empty();
    }

};