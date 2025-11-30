// 24. Total and Average of 5 subjects
#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, s4, s5;
    cout << "Enter marks of 5 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    int total = s1 + s2 + s3 + s4 + s5;
    float avg = total / 5.0;
    cout << "Total = " << total << endl;
    cout << "Average = " << avg << endl;
    return 0;
}
