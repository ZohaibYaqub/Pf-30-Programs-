// 28. Compute discriminant (disc = b² - 4ac)
#include <iostream>
using namespace std;

int main() {
    float a, b, c, disc;
    cout << "Enter values of a, b, c: ";
    cin >> a >> b >> c;
    disc = (b * b) - (4 * a * c);
    cout << "Discriminant = " << disc << endl;
    return 0;
}
