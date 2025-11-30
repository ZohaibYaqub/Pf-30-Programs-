// 19. Age in months and days
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age in years: ";
    cin >> age;
    cout << "Age in months = " << age * 12 << endl;
    cout << "Age in days = " << age * 365 << endl;
    return 0;
}
