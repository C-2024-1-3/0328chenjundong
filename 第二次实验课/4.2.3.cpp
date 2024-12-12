#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int *arr, int size) {
    sort(arr, arr + size);
}

int main() {
    int size;
    cout << "请输入数组元素个数: ";
    cin >> size;

    int *arr = new int[size];

    cout << "请输入 " << size << " 个元素: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sortArray(arr, size);

    cout << "排序后的数组: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

