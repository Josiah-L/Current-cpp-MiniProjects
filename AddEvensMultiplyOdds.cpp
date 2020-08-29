#include <iostream>
#include <vector>
using namespace std;

int main() {
    int EOfinder;
    int even = 0;
    int odd = 1;
    int userinput = 0;

    vector<int> numbers = {};
    while (userinput != -1) {
        cout << "Enter any positive whole number (enter -1 if you're finished): " << endl;
        cin >> userinput;
        if (userinput >= 0) {
            numbers.push_back(userinput);
        }
    }

    for (int i = 0; i < numbers.size(); i++) {
        EOfinder = numbers[i] % 2;

        if (EOfinder == 0) {
            even += numbers[i];
        }
        else {
            odd *= numbers[i];
        }
    }
    cout << "Added Evens Total: " << even << endl;
    cout << "Multiplied Odds Total: " << odd << endl;
}