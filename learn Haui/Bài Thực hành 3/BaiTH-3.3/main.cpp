//#include<bits/stdc++.h>
#include <iostream>
#include<iomanip>
using namespace std;

class Hang
{
private:
    char maH[10];
    char tenH[30];
    double dongia;
public:
    void nhap();
    void xuat();
};

void Hang::nhap()
{
    cout<<"Nhap ma hang :";fflush(stdin);gets(maH);
    cout<<"Nhap ten hang :";fflush(stdin);gets(tenH);
    cout<<"Nhap don gia : "; cin>>dongia;
}

void Hang::xuat()
{
    cout<<setw(10)<<maH<<setw(20)<<tenH<<setw(20)<<dongia<<endl;
}

class Phieu
{
private:
    char maP[10];
    Hang *x;
    int n;
public:
    void nhap();
    void xuat();
};

void Phieu::nhap()
{
    cout<<"nhap ma phieu : ";fflush(stdin);gets(maP);
    cout<<"Nhap so Hang : ";cin>>n;
    x = new Hang[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
}

void Phieu::xuat()
{
    cout<<" ma phieu "<<maP<<endl;
     cout<<setw(10)<<"ma hang"<<setw(20)<<"ten hang"<<setw(20)<<"don gia"<<endl;
    for(int i=0;i<n;i++)
        x[i].xuat();
}


main()
{
   Phieu p;

   p.nhap();
   cout<<"----------------------------------------------"<<endl;
   p.xuat();
}
