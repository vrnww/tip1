//zadan 1
#include <iostream>
using namespace std;

long long step(long long a, long long n) {
    long long ans = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            ans = ans * a;
        }
        a = a * a;
        n = n / 2;
    }
    return ans;
}

int main() {
    long long a, n;
    cin >> a >> n;
    cout << step(a, n);
    return 0;
}
//zadan 3
#include <iostream>
using namespace std;

void hanoi(int n, int from, int to, int aux) {
    if (n == 0) {
        return;
    }
    hanoi(n-1, from, aux, to) ;
    cout << "ingredient" << n << "move from" << from << "to" << to << endl;
    hanoi(n-1, aux, to, from);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 3, 2);
    return 0;
}