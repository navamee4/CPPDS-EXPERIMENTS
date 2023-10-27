#include <iostream>
using namespace std;
int main()
{
    char name[20];
    char str[10] = "SITE&TC";
    cout<<str<<endl;
    cout<<"Enter your name:";
    cin.get(name,20);
    cout<<name<<endl;
    int i;
    for(i=0;name[i];i++);
    cout<<i<<endl;
    
}