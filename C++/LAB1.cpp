//avgTempV2.cpp
//Author: Drew
//review the use of an array
#include<iostream>
using namespace std;

struct Student
{
	string name;
	double quiz1;
	double quiz2;
	double project;
	double exam;
};

void filler(Student s[], int s)
{
	int i;
	for (i = 0; i < s; i++)
	{
		cout << "Enter full name for student number " << i + 1 << ": ";
		cin >> s.name[i];
	}
}

int main()
{
	int size = 9;
	Student class[size];

}