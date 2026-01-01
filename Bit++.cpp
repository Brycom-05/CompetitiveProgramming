#include <iostream>

using namespace std;

int main()
{
    int n;
    string input;
    int num = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input == "++X" || input == "X++") {
            num += 1;
        }
        else if (input == "--X" || input == "X--") {
            num -= 1;
        }
    }

    cout << num;

    return 0;
}
