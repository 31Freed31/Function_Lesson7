#include <iostream>
using namespace std;

void evendigits(long long n, int& ans) {
    if (n == 0) {
        return;
    }

    int last_digit = n % 10;

    if (last_digit % 2 == 0) {
        ans++;
    }

    evendigits(n / 10, ans);
}

int main() {
    setlocale(LC_CTYPE, "rus");

    long long n = 9223372036854775806;
    int ans = 0;

    evendigits(n, ans);

    cout << "Количество чётных цифр: " << ans << endl;

    return 0;
}