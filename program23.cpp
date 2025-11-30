// 23. Area & Circumference of Circle
#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
    float r;
    cout << "Enter radius: ";
    cin >> r;
    float area = PI * r * r;
    float circumference = 2 * PI * r;
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;
    return 0;
}
