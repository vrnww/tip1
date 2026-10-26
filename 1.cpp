#include <iostream>


using namespace std;


int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    
    int* arr1 = new int[n];
    int* arr2 = new int[n];
    
    cout << "Введите " << n << " чисел:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    
    cout << "Новый массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    delete[] arr1;
    delete[] arr2;
    return 0;
}