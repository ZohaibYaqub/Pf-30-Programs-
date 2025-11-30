// 25. Area of triangle using Heron’s formula
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of triangle = " << area << endl;
    return 0;
}
