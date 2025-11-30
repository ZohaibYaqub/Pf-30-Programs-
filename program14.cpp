// 14. Convert millimeters to inches
#include <iostream>
using namespace std;

int main() {
    float mm;
    cout << "Enter millimeters: ";
    cin >> mm;
    float inches = mm / 25.4;
    cout << "Inches = " << inches << endl;
    return 0;
}
