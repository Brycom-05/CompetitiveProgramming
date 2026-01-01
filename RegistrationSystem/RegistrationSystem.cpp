// RegistrationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> names;

    for (int i = 0; i < n; i++) {
        int count = 0;
        string name, new_name;
        cin >> name;

        new_name = name;

        if (names.find(name) == names.end()) {
            names.emplace(name, 0);
        }
        else {
            names.find(name)->second += 1;
            string num = to_string(names.find(name)->second);
            new_name = name + num;
        }

        if (new_name != name) {
            names.emplace(new_name, 1);
            cout << new_name << endl;
        }
        else {
            cout << "OK" << endl;
        }
    }

    return 0;
}
