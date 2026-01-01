#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        long long sum = 0;
        vector<int> dandelion_counts;
        vector<int> oddcounts;
        cin >> n;

        for (int j = 0; j < n; j++) {
            int input;
            cin >> input;
            dandelion_counts.push_back(input);
        }

        for (int k = 0; k < dandelion_counts.size(); k++) {
            if (dandelion_counts.at(k) % 2 == 0) {
                sum += dandelion_counts.at(k);
            }
            else {
                oddcounts.push_back(dandelion_counts.at(k));
            }
        }

        if (oddcounts.size() == 0) sum = 0;
        else {

            for (int l = 0; l < oddcounts.size(); l++) {
                int max = oddcounts.at(l);
                int pos = l;
                for (int m = l; m < oddcounts.size(); m++) {
                    if (oddcounts.at(m) > max) {
                        max = oddcounts.at(m);
                        pos = m;
                    }

                }
                int temp = oddcounts.at(l);
                oddcounts.at(l) = oddcounts.at(pos);
                oddcounts.at(pos) = temp;
            }

            if (oddcounts.size() % 2 == 0) {
                for (int i = 0; i < oddcounts.size() / 2; i++) {
                    sum += oddcounts.at(i);
                }
            }
            else {
                for (int i = 0; i < oddcounts.size() / 2 + 1; i++) {
                    sum += oddcounts.at(i);
                }
            }
        }

        cout << sum << endl;
    }

    
    return 0;
}
