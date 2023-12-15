#include "Header.h"

void WritePersonData(const unsigned short* age, const string& name, const string& height, const string weight) {
    cout << "Age: " << *age << endl;
    cout << "Name: " << name << endl;
    cout << "Height: " << height << " = m" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "salary: " << Salary << endl;
}