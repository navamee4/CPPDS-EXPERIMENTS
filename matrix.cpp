#include <iostream>
using namespace std;
int main()
{
int i,j;
int arr[4][2]={{1,2},{4,5},{7,8},{10,11}};
int mat[4][2]={{1,2},{4,5},{7,8},{10,11}};
int sum[4][2];
cout<<"2D array:\n";
for(i=0;i<4;i++)
{
    for(j=0;j<2;j++)
    {
        cout<<"\t"<< arr[i][j];
    }
    cout<<endl;
}



for(i=0;i<4;i++)
{
    for(j=0;j<2;j++)
    {
        cout<<"\t"<< mat[i][j];
    }
    cout<<endl;
}

for(i=0;i<4;i++)
{
    for(j=0;j<2;j++)
    {
        sum[i][j]=arr[i][j]+mat[i][j];
        cout<<sum[i][j]<<"  ";
       
    }
    

}

}
