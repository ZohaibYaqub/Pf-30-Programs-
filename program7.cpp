// 7. Total and Average of 3 subjects
#include <iostream>
using namespace std;

int main() {
    int rollNo, pf, ic, cg;
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter marks in PF, IC, CG: ";
    cin >> pf >> ic >> cg;

    int total = pf + ic + cg;
    float avg = total / 3.0;

    cout << "Total = " << total << endl;
    cout << "Average = " << avg << endl;
    return 0;
}
