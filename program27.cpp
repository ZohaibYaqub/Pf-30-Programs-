// 27. Convert time to seconds
#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cout << "Enter hours, minutes, and seconds: ";
    cin >> h >> m >> s;
    int totalSeconds = h * 3600 + m * 60 + s;
    cout << "Total time in seconds = " << totalSeconds << endl;
    return 0;
}
