//stringArray1.cpp
#include<iostream>
using namespace std;
int main()
{
    string fname;
    string lname;
    string full_name;
    char city[10];
    
    cout <<"Enter a first name: ";
    cin >>fname;
    cout <<"Enter last name: ";
    cin >>lname;
    cout <<"Enter the city: ";
    cin >>city;
    
    full_name = fname + " " + lname; //concatenation
    
    cout<<"first: "<<fname<<endl;
    cout <<"last: "<<lname<<endl;
    cout <<"Full name: "<<full_name<<endl;
    
    cout <<"Initials: "<<fname[0]<<" . "<<lname[0]<<endl;
    cout <<"City: "<<city<<endl;
    
    system("PAUSE");
    return 0;
}
