#include <iostream>
using namespace std;
int main()
{
    string brand,model,dsize,version,im,bc;
    int mcmp;

    cout<<"Brand : ";
    cin>>brand;
    cout<<"Model : ";
    cin>>model;
    cout<<"Display size : ";
    cin>>dsize;
    cout<<"Os version : ";
    cin>>version;
    cout<<"Internal memory : ";
    cin>>im;
    cout<<"Battery capacity : ";
    cin>>bc;
    cout<<"Main Camera MP : ";
    cin>>mcmp;

    cout<<"\n";
    cout<<"\t------------------------------------"<<endl;
    cout<<"\t"<<brand<<" "<<model<<endl;
    cout<<"\t"<<dsize<<" display"<<endl;
    cout<<"\t"<<"Inbuilt OS "<<version<<endl;
    cout<<"\t"<<im<<" Memory"<<endl;
    cout<<"\t"<<bc<<" of Long-time Battery Capacity"<<endl;
    cout<<"\t"<<mcmp<<" Mega Pixel Main camera"<<endl;
    cout<<"\t------------------------------------"<<endl;
    return 0;
}
