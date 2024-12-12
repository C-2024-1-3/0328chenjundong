#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int *arr, int size) {
    sort(arr, arr + size);
}

int main() {
    int size;
    cout << "����������Ԫ�ظ���: ";
    cin >> size;

    int *arr = new int[size];

    cout << "������ " << size << " ��Ԫ��: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sortArray(arr, size);

    cout << "����������: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

