//topTenList.cpp
#include<iostream>
using namespace std;
int main()
{
    string topTenList[10];
    int i;
    
    for (i = 0; i < 10; i++)
    {
        cout <<"enter an item in the top ten list, item#"<<i+1<<": ";
        cin >>topTenList[i];
    }
    
    for (i = 0; i < 10; i++)
        cout <<"Item #"<<i+1<<": "<<topTenList[i]<<endl;
        
    
    
    system("PAUSE");
    return 0;
}
