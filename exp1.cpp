#include <iostream>
using namespace std;
int myIntVar;
float myFloatVar;
string myStringVar;
char myCharVar;
main()
{


cin>>myIntVar;
cin>>myFloatVar;

cin>> myStringVar;

cin>> myCharVar;
cout<< "The value integer variable is ";
cout<< myIntVar <<endl;

cout<<"The value float variable is ";
cout<<myFloatVar<<endl;
cout<< "The value string is ";
cout<<myStringVar<<endl;
cout<< "The character is ";
cout<<myCharVar<<endl;
cout<<"Size of integer "<<sizeof(myIntVar)<<endl;
cout<<"Size of decimal "<<sizeof(myFloatVar)<<endl;
cout<<"Size of strng "<<sizeof(myStringVar)<<endl;
cout<<"Size of character "<<sizeof(myCharVar)<<endl;

}




