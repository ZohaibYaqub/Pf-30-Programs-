// 12. Volume of a cylinder using const
#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;
    float r, h, volume;
    cout << "Enter radius and height: ";
    cin >> r >> h;
    volume = PI * r * r * h;
    cout << "Volume of cylinder = " << volume << endl;
    return 0;
}
