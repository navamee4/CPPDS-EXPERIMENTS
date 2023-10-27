#include <iostream>
using namespace std;

class cube{
    public:
    double height = 1.0;
    double width = 1.0;
    double length = 1.0;

};

int main()
{
    int vol;
    cube cube1;
    cout<<"Enter height:";
    cin>>cube1.height;
    cout<<"Enter width:";
    cin>>cube1.width;
    cout<<"Enter length:";
    cin>>cube1.length;
    cout<<"Volume=";
    vol = cube1.height*cube1.width*cube1.length;
    cout<<vol;
}
