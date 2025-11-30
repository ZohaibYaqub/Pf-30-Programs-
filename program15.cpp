// 15. Interchange values of two variables
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After interchange: a = " << a << ", b = " << b << endl;
    return 0;
}
