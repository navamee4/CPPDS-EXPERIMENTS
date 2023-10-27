#include <iostream>
using namespace std;

class cube{
    private:
    double height;
    double width ;
    double length ;
    public:

void input()
   { cout<<"Enter height:";
    cin>>height;
    cout<<"Enter width:";
    cin>>width;
    cout<<"Enter length:";
    cin>>length;
    
   }
    double volume()

{
    double vol = height*width*length;
    return vol;
}
};

int main()
{ 
    
    cube cube1;
    cube1.input();
    double volume=cube1.volume();
    cout<<volume;
    cube1.volume(); 
   
}
