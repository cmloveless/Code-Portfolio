//avgTempV2.cpp
//Author: Drew
//review the use of an array
#include<iostream>
using namespace std;
int main()
{
    double temps[7];
    int i;
    double avg;
    double accum = 0.0;
    
    for(i = 0; i < 7; i++)
    {
          cout <<"Enter the temperature for day "<<i+1<<": ";
          cin >>temps[i];
          accum += temps[i];
    }
    avg = accum/7;
    cout <<"=====================\n";
    for(i = 0; i < 7; i++)
          cout <<"Temperature for day "<<i+1<<": "<<temps[i]<<endl;
    cout <<"The average temperature = "<<avg<<endl;
    
    
    system("PAUSE");
    return 0;
}
