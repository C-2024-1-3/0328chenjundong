#include <iostream>

int main() {
    const int numLockers = 100;
    bool lockers[numLockers] = {false};

    for (int student = 1; student <= numLockers; ++student) {
        for (int locker = student; locker <= numLockers; locker += student) {
            lockers[locker - 1] = !lockers[locker - 1];
        }
    }

    for (int i = 0; i < numLockers; ++i) {
        if (lockers[i]) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

