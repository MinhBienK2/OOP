#include <iostream>
#include<iomanip>
using namespace std;

class Vehicle
{
protected:
    char NH[20];
    int nam;
    char hang[20];
public:
    void nhap();
    void xuat();
};

void Vehicle::nhap()
{
    cout<<"Enter Nhan hieu : " ;fflush(stdin);gets(NH);
    cout<<"Enter nam sx : " ;cin>>nam;
    cout<<"Enter hang : " ;fflush(stdin);gets(hang);
}

void Vehicle::xuat()
{
    cout<<left<<setw(20)<<NH<<setw(20)<<nam<<setw(20)<<hang;
}

class Oto : public Vehicle
{
private:
    int soChoNgoi;
    double DT;
public:
    void nhap();
    void xuat();
    friend void sua(Oto &a);
};

void Oto::nhap()
{
    Vehicle::nhap();
    cout<<"Enter so cho ngoi : " ;cin>>soChoNgoi;
    cout<<"Enter dung tich : " ;cin>>DT;
}

void Oto::xuat()
{
    Vehicle::xuat();
    cout<<setw(20)<<soChoNgoi<<setw(20)<<DT<<endl;
}


class Moto : public Vehicle
{
private:
    double PK;
public:
    void nhap();
    void xuat();
};

void Moto::nhap()
{
    Vehicle::nhap();
    cout<<"Enter so cho ngoi : " ;cin>>PK;

void Moto::xuat()
{
    Vehicle::xuat();
    cout<<left<<setw(20)<<PK<<endl;
}

void sua(Oto &a)
{
    a.DT = 3.1;
}

main()
{
    Oto a;
    a.nhap();
    cout<<"--------------oto---------------"<<endl;
    a.xuat();
    Moto b;
    b.nhap();
    cout<<"--------------moto---------------"<<endl;
    b.xuat();
    sua(a)
    cout<<"--------------oto---------------"<<endl;
    a.xuat();
}
