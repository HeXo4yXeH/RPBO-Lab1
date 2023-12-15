#include "Header.h"

void ReadPersonData(unsigned short& age, string& name, double& salary) {
    age = ReadPersonAge();
    name = ReadPersonName();
    ReadPersonSalary(&salary);
}