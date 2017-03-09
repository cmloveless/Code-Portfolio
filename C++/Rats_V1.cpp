//rats_V1.cpp
#include<iostream>
using namespace std;

//declaration
    struct Rat
    {
           int ID;
           int age;
           double weight;
           char vac;
           double length;
           
    };

void avg_w(Rat w[], int s)
{
	int i;
	double sum1, wresult;
	for (i = 0; i < s; i++)
	{
		sum1 += w[i].weight;
	}
	wresult = sum1 / s;
	cout <<"The average weight is: "<<wresult<<"\n";
}

void avg_l (Rat l[], int s)
{
	int i;
	double sum2, lresult;
	for (i = 0; i < s; i++)
	{
		sum2 += l[i].length;
	}
	lresult = sum2 / s;
	cout <<"The average length is: "<<lresult<<"\n";
}


int main()
{
    
    int size, i, count;
    do
    {
        cout <<"How many rats do you want to record?: ";
        cin >>size;
    }while (size < 0);
    
    Rat myRecord[size];
    
    //assignment
    for (i = 0; i < size; i++)
    {
        system("CLS");
        cout <<"Record #"<<i+1<<"\n"
             <<"===========\n"
             <<"Enter the rat's ID: ";
        cin >>myRecord[i].ID;
        cout <<"Enter the rat's age: ";
        cin >>myRecord[i].age;
        cout <<"Enter the rat's weight: ";
        cin >>myRecord[i].weight;
        cout <<"Is this rat vaccinated? (y/n): ";
        cin >>myRecord[i].vac;
        cout <<"Enter the length of the rat in inches: ";
        cin >>myRecord[i].length;
    }
    //output
    system("CLS");
    for (i = 0; i < size; i++)
    {
        cout <<"ID: "<<myRecord[i].ID<<"\n"
             <<"Age: "<<myRecord[i].age<<"\n"
             <<"Weight: "<<myRecord[i].weight<<"\n"
             <<"Vaccianted?: "<<myRecord[i].vac<<"\n"
             <<"Length: "<<myRecord[i].length<<endl;
    }  
    avg_w(myRecord, size);
    avg_l(myRecord, size);
    system("PAUSE");
    return 0;
}
