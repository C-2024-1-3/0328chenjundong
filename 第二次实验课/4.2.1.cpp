#include <iostream>
#include <cstring>
using namespace std;

int indexof(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 > len2) {
        return -1;
    }

    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }

    return -1;
}

int main() {
    char s1[100], s2[100];

    cout << "Enter string s1: ";
    cin.getline(s1, 100);

    cout << "Enter string s2: ";
    cin.getline(s2, 100);

    int index = indexof(s1, s2);

    if (index != -1) {
        cout << "Substring found at index: " << index << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}

