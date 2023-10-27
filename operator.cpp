#include<iostream>
using namespace std;
int myVar1,myVar2,result;
int main()
{float sum, sub, mul, div;
bool compare;
    cout <<"enter first no.";
cin >> myVar1;
cout <<"enter second no.";
cin >> myVar2;
sum = myVar1+myVar2;
cout << "the sum is " << sum << endl;
sub = myVar1-myVar2;
cout << "the difference is " << sub<< endl;
mul = myVar1*myVar2;
cout << "the product is " << mul<< endl;
div = myVar1/myVar2;
cout << "the quotient is " << div<< endl;
compare = myVar1<myVar2;
cout << "the comparison is " << compare << endl;

}
