#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        int one_count = 0;
        int result;
        cin >> n >> m;
        vector<int> digits;

        for (int j = 0; j < m; j++) {
            int input;
            cin >> input;
            if (input == 1) one_count += 1;
            digits.push_back(input);
        }

        if (one_count > 1) {
            result = 1;
        }
        else if (digits.front() != 1 && one_count > 0) {
            result = 1;
        }
        else {
            int max = 0;
            for (int j = 0; j < m; j++) {
                if (digits.at(j) > max) {
                    max = digits.at(j);
                }
            }
            result = n - max + 1;
        }

        cout << result << endl;
    }

    return 0;
}
