#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int var1 = 23;
    cout<< var1;
    cout<< showbase << hex << var1<<endl;
    cout<< showbase << dec << var1<<endl;
    cout<< showbase << oct << var1<<endl;
   
    if (var1&1)
    cout<< "Odd";
    else
    cout<<"even";

}