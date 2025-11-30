// 18. Compute s using given formula (s = vi * t + 0.5 * a * t^2)
#include <iostream>
using namespace std;

int main() {
    float vi = 10, t = 5, a = 2;
    float s = vi * t + 0.5 * a * t * t;
    cout << "Value of s = " << s << endl;
    return 0;
}
