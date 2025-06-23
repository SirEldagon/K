#include <iostream>
#include <string>

bool IsKPeriodic(const std::string& str, int K) {
    int len = str.size();
    if (K <= 0 || len % K != 0)
        return false;
    for (int i = 0; i < len; ++i) {
        if (str[i] != str[i % K])
            return false;
    }
    return true;
}

int main() {
    std::string testStr = "abcabcabcabc";
    int K = 3;
    if (IsKPeriodic(testStr, K))
        std::cout << "Строка является кратной " << K << std::endl;
    else
        std::cout << "Строка не является кратной " << K << std::endl;
    return 0;
}