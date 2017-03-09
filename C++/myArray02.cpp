//myArray02.cpp
#include<iostream>
using namespace std;

//data entry
void grades_entry(double grd[], int s)
{
     int i;
     for (i = 0; i < s; i++)
     {
         cout <<"Enter grade "<<i+1<<": ";
         cin >>grd[i];
     }
 }

//grades output
void grades_ouput(double grd[], int s)
{
     int i;
     for (i = 0; i < s; i++)
         cout <<"Grade "<<i+1<<": "<<grd[i]<<endl;
}

//find the highest
double highest_grade(double grd[], int s)
{
       double h;
       h = grd[0];
       int i;
       for (i = 0; i < s; i++)
           if (grd[i] > h)
              h = grd[i];
       
       return h;
}

//find the lowest
double lowest_grade(double grd[], int s)
{
       double l;
       l = grd[0];
       int i;
       for (i = 0; i < s; i++)
           if (grd[i] < l)
              l = grd[i];
       
       return l;
}

double avg(double grd[], int s)
{
       double accum = 0.0;
       for (int i = 0; i < s; i++)
           accum += grd[i];
       return accum/s;
}

int main()
{
    int size = 3;
    double grade[size];
    double highest, lowest, average;
    
    //call to insert data
    grades_entry(grade, size);
    
    //find the highest
    highest = highest_grade(grade, size);
    //find the lowest
    lowest = lowest_grade(grade, size);
    //find the average grade
    average = avg(grade, size);
    
    //call to print data out
    grades_ouput(grade, size);
    cout <<"The highest grade = "<<highest<<endl;
    cout <<"The lowest grade = "<<lowest<<endl;
    cout <<"The average grade = "<<average<<endl;
    
    
    system("PAUSE");
    return 0;
}
