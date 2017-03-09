/*additionV4.cpp
Author: Drew
Date:8/22/2016
This program will use a function other than main() to add two numbers*/
#include<iostream>
using namespace std;

void add(double num1, double num2)
{
     double result;
     
     //processing
     result = num1 + num2;
     //output
     cout <<num1<<" + "<<num2<<" = "<<result<<endl;
}

int main()
{
    //data declaration
     double n1, n2;
     //assignment
     cout <<"Enter the first number: ";
     cin >>n1;
     cout <<"Enter the second number: ";
     cin >>n2;
    
    add(n1, n2);

    system("PAUSE");
    return 0;
}
