#include <iostream>
using namespace std;

int main() {

    int year;
    cout << "Enter a year:\n";
    cin >> year;

    int leap4 = (year % 4);

    int leap100;
    if ((year % 400) == 1) {
        leap100 = (year % 100);
    }
    else {
        leap100 = 1;
    }

    if (leap4 == 0 && leap100 == 1) {
        cout << "It is a leap year!\n";
    }
    else {
        cout << "It is not a leap year...\n";
    }

}
