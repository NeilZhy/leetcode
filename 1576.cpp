#include <iostream>
#include <string>

using namespace std;

// =====================================================
// 1. 遍历每个字符串
// 2. 如果当前字符串是？，就替换成a
// 3. 判断替换之后的a是否和前后字符一样，如果一样，替换成b(c,d..)
// =====================================================

class Solution {
public:
    string modifyString(string s) {
        for (int i = 0; i < s.size(); i++) {
            if ('?' == s[i]) {
                s[i] = 'a';
                while (((i - 1 >= 0) && (s[i - 1] == s[i])) ||
                       ((i + 1 < s.size()) && (s[i + 1] == s[i]))) {
                  s[i]++;
                }
            }
        }
        return s;
    }
};

int main() {
    Solution s;
    std::cout << s.modifyString("??a??fasdf?") << std::endl;
    return 0;
}