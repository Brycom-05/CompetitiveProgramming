// Problem 25A on Codeforces

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> nums;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        nums.push_back(t);
    }

    if (nums.at(0) % 2 == 0 && nums.at(1) % 2 == 0) {
        for (int j = 2; j <= nums.size() - 1; j++) {
            if (nums.at(j) % 2 != 0) {
                cout << j+1 << endl;
                break;
            }
        }
    }
    else if (nums.at(0) % 2 != 0 && nums.at(1) % 2 != 0) {
        for (int j = 2; j <= nums.size() - 1; j++) {
            if (nums.at(j) % 2 == 0) {
                cout << j+1 << endl;
                break;
            }
        }
    }
    else {
        if (nums.at(2) % 2 == 0) {
            if (nums.at(1) % 2 != 0) {
                cout << "2" << endl;
            }
            else {
                cout << "1" << endl;
            }
        }
        else {
            if (nums.at(1) % 2 == 0) {
                cout << "2" << endl;
            }
            else {
                cout << "1" << endl;
            }
        }
    }

    return 0;
}
