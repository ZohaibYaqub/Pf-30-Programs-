// 22. Input name, age, height, gender
#include <iostream>
using namespace std;

int main() {
    string name, gender;
    int age;
    float height;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter height (in cm): ";
    cin >> height;
    cout << "Enter gender: ";
    cin >> gender;

    cout << "\nStudent Info:\n";
    cout << "Name: " << name << "\nAge: " << age << "\nHeight: " << height << "\nGender: " << gender << endl;
    return 0;
}
