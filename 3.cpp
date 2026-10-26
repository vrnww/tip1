#include <iostream>


using namespace std;


int maxOfTwo(int a, int b) {
    if (a > b) return a;
    return b;
}

int main() {
    int x, y;
    cout << "Введите два числа: ";
    cin >> x >> y;
    cout << "Большее число: " << maxOfTwo(x, y) << endl;
    return 0;
}