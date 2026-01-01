#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream inputFile;
	ofstream outputFile;

	inputFile.open("snake_scales_chapter_1_input.txt");
	outputFile.open("outputA.txt");


	if (!inputFile.is_open()) {
		std::cerr << "Error: Could not open input.txt" << std::endl;
		return 1;
	}
	if (!outputFile.is_open()) {
		std::cerr << "Error: Could not open output.txt" << std::endl;
		inputFile.close();
		return 1;
	}

	int t;
	inputFile >> t;

	for (int i = 0; i < t; i++) {
		int n;
		inputFile >> n;

		vector<int> platforms;
		for (int j = 0; j < n; j++) {
			int height;
			inputFile >> height;
			platforms.push_back(height);
		}

		int maxdiff = 0;
		if (platforms.size() != 1) {
			for (int k = 1; k < platforms.size(); k++) {
				if (abs(platforms.at(k) - platforms.at(k - 1)) > maxdiff) {
					maxdiff = abs(platforms.at(k) - platforms.at(k - 1));
				}
			}
		}

		outputFile << "Case #" << i + 1 << ": " << maxdiff << endl;
	}

	inputFile.close();
	outputFile.close();

	return 0;
}