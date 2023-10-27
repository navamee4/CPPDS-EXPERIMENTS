#include <iostream>
using namespace std;
int main()
{
int i,j;
int arr[4][2]={{1,2},{4,5},{7,8},{10,11}};
int mat[4][2]={{1,2},{4,5},{7,8},{10,11}};
int sum[4][2];
int transpose[4][3];
cout<<"first array:\n";
for(i=0;i<4;i++)
{
    for(j=0;j<2;j++)
    {
        cout<<"\t"<< arr[i][j];
    }
    cout<<endl;
}
cout<<"second array:\n";
for(i=0;i<4;i++)
{
    for(j=0;j<2;j++)
    {
        cout<<"\t"<< mat[i][j];
    }
    cout<<endl;
}
cout<<"Sum: \n";
for(i=0;i<4;i++)
{
    for(j=0;j<2;j++)
    {
        sum[i][j]=arr[i][j]+mat[i][j];
        cout<<"\t"<<sum[i][j]<<"  ";
       
    }
    cout<<endl;

}
cout<<"Transpose: \n";
for(i=0;i<4;i++)
{
    for(j=0;j<2;j++)
    {
        transpose[j][i]=arr[j][i];
        cout<<"\t"<<transpose[j][i]<<"  ";
       
    }
    cout<<endl;

}

}
