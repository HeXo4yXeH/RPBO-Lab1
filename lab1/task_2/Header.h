#include <iostream>
#include <string>
#include <locale>
#include <iomanip>

using namespace std;

extern unsigned short height;
extern string Salary;
unsigned short ReadPersonAge();
string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& weight);
void ReadPersonSalary(double* salary);
void ReadPersonData(unsigned short& age, string& name, double& salary);
void ReadPersonData(unsigned short& age, string& name, unsigned short& weight, unsigned short& height);
void WritePersonData(const unsigned short* age, string& name, const string& height, const string& weight);