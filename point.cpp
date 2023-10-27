#include <iostream>
using namespace std;
int main()
{
    int var = 10;
    int *ptr = &var; 
    cout<<var<<endl; //value of variable
    cout<<*ptr<<endl;//value present at address given by ptr
    cout<<&var<<endl;//address of var
    cout<<ptr<<endl; //value of ptr
    cout<<&ptr<<endl;//address of ptr
    float flt = 20;
    float *pnt = &flt;
    cout<<flt<<endl; //value of variable
    cout<<*pnt<<endl;//value present at address given by ptr
    cout<<&flt<<endl;//address of var
    cout<<pnt<<endl; //value of ptr
    cout<<&pnt<<endl;//address of ptr
    
    int arr[5]= {1,2,3,4,5};
    int *point = &arr[0];
    for(int i=0; i<5;i++)
    {
        cout<<*point<<endl;
        *point++;
    }
}
