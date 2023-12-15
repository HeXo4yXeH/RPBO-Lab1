#include "Header.h"
#include <windows.h>

unsigned short height;

int main() {
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    unsigned short age = ReadPersonAge();
    string name;
    unsigned short weight;
    double salary;
    ReadPersonName();
    ReadPersonHeight();
    ReadPersonWeight(weight);
    ReadPersonSalary(&salary);
    Salary = to_string(salary);
    ReadPersonData(age, name, salary);
    ReadPersonData(age, name, height, weight);
    WritePersonData(&age, name, to_string(height), to_string(weight));
    return 0;
}