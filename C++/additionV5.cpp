//additionV5.cpp
//pass by reference
//Author: Drew
#include<iostream>
using namespace std;

void addition(double *n1, double *n2)
{
     double result;
     result = *n1  + *n2;
     cout <<*n1<<" + "<<*n2<<" = "<<result<<endl;
     cout <<"n1 contains this: "<<n1<<endl;
}

int main()
{
    double num1, num2;
    cout <<"Enter num1: ";
    cin >>num1;
    cout <<"Enter num2: ";
    cin >>num2;
    cout <<"num1 is stored at this memory location: "<<&num1<<endl;
    
    addition(&num1, &num2);
    
    system("PAUSE");
    return 0;
}
