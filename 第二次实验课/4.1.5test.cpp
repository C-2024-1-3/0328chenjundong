#include <iostream>
#include <cstring>

int indexOf(const char s1[], const char s2[]) {
    int len1 = std::strlen(s1);
    int len2 = std::strlen(s2);

    if (len1 > len2) {
        return -1;
    }

    for (int i = 0; i <= len2 - len1; ++i) {
        bool found = true;
        for (int j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }

    return -1;
}

int main() {
    char s1[100], s2[100];
    std::cin >> s1 >> s2;

    int index = indexOf(s1, s2);
    std::cout << index << std::endl;

    return 0;
}

