//dowhileEx1.cpp
//Author: Drew
#include<iostream>
using namespace std;

int main()
{
    double num1, num2, result;
    
    cout <<"Enter the numerator for a fraction: ";
    cin >>num1;
    do
    {
        cout <<"Enter the denominator: ";
        cin >>num2;
        if (num2 == 0)
           cout <<"Invalid Entry!\n";
           
    }while (num2 == 0.0);
    
    result = num1/num2;
    
    cout <<num1<<" / "<<num2<<" = "<<result<<endl;
    
    system("PAUSE");
    return 0;
}
