#include <iostream>
#include <cmath>
using namespace std;

int parseHex(const char *const hexString) {
    int result = 0;
    int length = 0;

    while (hexString[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        char currentChar = hexString[i];
        int value;

        if (currentChar >= '0' && currentChar <= '9') {
            value = currentChar - '0';
        } else if (currentChar >= 'A' && currentChar <= 'F') {
            value = currentChar - 'A' + 10;
        } else if (currentChar >= 'a' && currentChar <= 'f') {
            value = currentChar - 'a' + 10;
        } else {
            return -1;
        }

        result += value * pow(16, length - 1 - i);
    }

    return result;
}

int main() {
    const char *hexString = "A5";
    int decimalValue = parseHex(hexString);
    cout << decimalValue << endl;

    return 0;
}

