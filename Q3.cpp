#include <iostream>
using namespace std;
int main()
{
   string idnum,sub1,sub2,sub3;
   float sub1m,sub2m,sub3m,total,avg;

    cout<<"Please enter your ID number : ";
    cin>>idnum;
    cout<<"Please enter subject 1 : ";
    cin>>sub1;
    cout<<"Please enter marks : ";
    cin>>sub1m;
    cout<<"Please enter subject 2 : ";
    cin>>sub2;
    cout<<"Please enter marks : ";
    cin>>sub2m;
    cout<<"Please enter subject 3 : ";
    cin>>sub3;
    cout<<"Please enter marks : ";
    cin>>sub3m;
    cout<<"\n";
    cout<<"Your ID number is: " <<idnum<<endl;
    cout<<"\n";
    cout<<"\tsubject\t\tmarks\n"<<"\t---------------------"<<endl;
    cout<<"\t"<<sub1<<"\t\t"<<sub1m<<endl;
    cout<<"\t"<<sub2<<"\t\t"<<sub2m<<endl;
    cout<<"\t"<<sub3<<"\t\t"<<sub3m<<endl;
    cout<<"\n";
    total = sub1m+sub2m+sub3m;
    cout<<"total = "<<total<<endl;
    avg = total/3;
    cout<<"average = "<<avg<<endl;
return 0;
}


