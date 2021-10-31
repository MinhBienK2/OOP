#include <iostream>
#include<iomanip>
using namespace std;

class Hang;
class Date
{
private:
    int d;
    int m;
    int y;
public:
    friend class Hang;
};

class Hang
{
private:
    char maH[10];
    char name[30];
    Date date;
public:
    void nhap();
    void xuat();
};

void Hang::nhap()
{
    cout<<"enter ma hang: " ;fflush(stdin);gets(maH);
    cout<<"enter ten hang: " ;fflush(stdin);gets(name);
    cout<<"NHap ngay :"; cin>>date.d;
    cout<<"NHap thang :"; cin>>date.m;
    cout<<"NHap nam :"; cin>>date.y;
}

void Hang::xuat()
{
   cout<<setw(20)<<maH<<setw(20)<<name<<setw(20)<<date.d<<"/"<<date.m<<"/"<<date.y<<endl;
}


int main()
{
    Hang *p;
    int n;
    cout<<"Nhap n = ";cin>>n;
    p = new Hang[n];
    for(int i=0;i<n;i++)
        p[i].nhap();
    cout<<setw(20)<<"ma hang"<<setw(20)<<"ten hang"<<setw(20)<<"ngay san xuat"<<endl;
    for(int i=0;i<n;i++)
        p[i].xuat();
}
