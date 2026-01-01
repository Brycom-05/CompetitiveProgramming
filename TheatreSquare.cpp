#include <iostream>

using namespace std;

int main()
{
    int n, m, a;

    cin >> n >> m >> a;

    long long side1, side2;
    long long ans;

    if (n % a == 0) {
        side1 = n / a;
    }
    else {
        side1 = n / a + 1;
    }

    if (m % a == 0) {
        side2 = m / a;
    }
    else {
        side2 = m / a + 1;
    }

    ans = side1 * side2;

    cout << ans;

    return 0;
}
