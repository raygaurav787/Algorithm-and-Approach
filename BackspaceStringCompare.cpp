// This question will have 2 approaches
/* first will be of 2 pointers in which 
we will preprocess both the string using
2 pointers we will take a variable k 
which we will initiate with 0 and then if 
it is not equal to '#' then we will assign
it to str and if equal to '#' then we will
k-- so that will skip the # and put the 
character at its place and that utility 
function will return the k i.e size of 
processed string 

then we will check if it is right or not
*/
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int k = processString(s);
        int p = processString(t);

        if (k != p) return false;

        for (int i = 0; i < k; i++) {
            if (s[i] != t[i]) return false;
        }

        return true;
    }

private:
    int processString(string& str) {
        int k = 0;
        for (char c : str) {
            if (c != '#') {
                str[k++] = c;
            } else if (k > 0) {
                k--;
            }
        }
        return k;
    }
};
/* 2nd approach aill use stack 
we process it using stack and then we 
will compare that both strings become
same or not*/
#include <stack>
#include <string>

class Solution {
public:
    bool backspaceCompare(std::string str1, std::string str2) {
        std::stack<char> stack1, stack2;
        
        for (char ch : str1) {
            if (ch != '#') {
                stack1.push(ch);
            } else if (!stack1.empty()) {
                stack1.pop();
            }
        }
        
        for (char ch : str2) {
            if (ch != '#') {
                stack2.push(ch);
            } else if (!stack2.empty()) {
                stack2.pop();
            }
        }
        
        if (stack1.size() != stack2.size()) {
            return false;
        }
        
        while (!stack1.empty()) {
            if (stack1.top() != stack2.top()) {
                return false;
            }
            stack1.pop();
            stack2.pop();
        }
        
        return true;
    }
};

