#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Muhammad Saad";
    int age = 21;
    int birthYear = 2006;

    birthYear = 2026 - age;

    cout << "\nStudent Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Birth Year: " << birthYear << endl;

    return 0;
}