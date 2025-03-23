#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int romanToInt(string s) {
            int total = 0;
        int prev_value = 0;
    
        for (int i = s.size() - 1; i >= 0; i--) {
            int current_value = 0;
    
            // Map Roman numeral characters to their integer values
            if (s[i] == 'I') {
                current_value = 1;
            } else if (s[i] == 'V') {
                current_value = 5;
            } else if (s[i] == 'X') {
                current_value = 10;
            } else if (s[i] == 'L') {
                current_value = 50;
            } else if (s[i] == 'C') {
                current_value = 100;
            } else if (s[i] == 'D') {
                current_value = 500;
            } else if (s[i] == 'M') {
                current_value = 1000;
            }
    
            // Apply subtraction rule
            if (current_value < prev_value) {
                total -= current_value;
            } else {
                total += current_value;
            }
    
            // Update previous value for next iteration
            prev_value = current_value;
        }
    
        return total;
        }
    };