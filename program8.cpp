8. Fahrenheit to Celsius
#include <iostream>
using namespace std;

int main() {
    float f, c;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    c = 5.0 / 9 * (f - 32);
    cout << "Temperature in Celsius = " << c << endl;
    return 0;
}
