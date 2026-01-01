#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        int sum = 0;
        int start = 1;
        
        cin >> n >> k;

        for (int j = 1; j < k; j++) {
            sum += start;
            start += 2;
        }

        if (sum < n) {
            if (k % 2 == 0) {
                if (n % 2 != 0) {
                    cout << "NO" << endl;
                }
                else {
                    cout << "YES" << endl;
                }
            }
            else {
                if (n % 2 == 0) {
                    cout << "NO" << endl;
                }
                else {
                    cout << "YES" << endl;
                }
            }
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
