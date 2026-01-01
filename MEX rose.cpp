#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	vector<int> digits;
	set<int> seen;

	for (int i = 0; i < t; i++) {
		int n, k;
		cin >> n >> k;
		int movecount = 0;
		int duplicate = 0;
		int missingdigits = 0;

		for (int j = 0; j < n; j++) {
			int input;
			cin >> input;
			digits.push_back(input);
		}

		for (int l = 0; l < n; l++) {
			if (digits.at(l) < k) {
				seen.insert(digits.at(l));
			}
			else if (digits.at(l) == k) {
				duplicate += 1;
			}
		}

		for (int m = 0; m < k; m++) {
			if (seen.find(m) == seen.end()) {
				missingdigits += 1;
			}
		}

		movecount = max(missingdigits, duplicate);

		cout << movecount << endl;

		seen.clear();
		digits.clear();
	}

	return 0;
}
