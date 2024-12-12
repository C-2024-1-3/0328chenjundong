#include <iostream>
#include <cstring>
#include <cctype>

void count(const char s[], int counts[]) {
    std::fill(counts, counts + 26, 0);
    for (int i = 0; s[i] != '\0'; ++i) {
        if (std::isalpha(s[i])) {
            counts[std::tolower(s[i]) - 'a']++;
        }
    }
}

int main() {
    char s[100];
    int counts[26];

    std::cin.getline(s, 100);
    count(s, counts);

    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            std::cout << static_cast<char>('a' + i) << ": " << counts[i] << std::endl;
        }
    }

    return 0;
}

