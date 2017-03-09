//divisionV2.cpp
//Author: Drew
//review of loop statement and passing by reference
//function that return a value
#include<iostream>
using namespace std;

double division(double *n1, double *n2)
{
       while (*n2 == 0.0)
       {
             cout <<"ERROR: Division by zero!\n"
                  <<"Enter another valid number to divide by: ";
             cin >>*n2;
       }
       
       return *n1 / *n2;
}

int main()
{
    double num1, num2;
    double result;
    cout <<"Enter a number: ";
    cin >> num1;
    cout <<"Enter the divider: ";
    cin >>num2;
    
    result = division(&num1, &num2);
    
    cout <<num1<<"/"<<num2<<" = "<<result<<endl;
    
    system("PAUSE");
    return 0;
}
