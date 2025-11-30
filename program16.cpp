// 16. Multiple assignment and product
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a = b = c = 3;
    int product = a * b * c;
    cout << "Product = " << product << endl;
    return 0;
}
