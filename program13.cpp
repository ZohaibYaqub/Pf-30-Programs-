// 13. Area of a circle using #define
#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
    float r, area;
    cout << "Enter radius: ";
    cin >> r;
    area = PI * r * r;
    cout << "Area of circle = " << area << endl;
    return 0;
}
