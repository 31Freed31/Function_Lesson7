#include <iostream>
using namespace std;


int countWays(int n, int k = 3) {
    if (n == 0) return 1;
    if (n < 0) return 0;

    int ways = 0;
    for (int i = 1; i <= k; i++) {
        ways += countWays(n - i, k);
    }

    return ways;
}
int main() {
    setlocale(LC_CTYPE, "rus");

    int n = 5;

    cout << "Количество способов допрыгать до " << n << "-й ступеньки: " << countWays(n) << endl;

}