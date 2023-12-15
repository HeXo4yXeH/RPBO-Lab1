#include "Header.h"

void ReadPersonData(unsigned short& age, string& name, unsigned short& height, unsigned short& weight) {
    age = ReadPersonAge();
    name = ReadPersonName();
    ReadPersonHeight();
    ReadPersonWeight(weight);
}