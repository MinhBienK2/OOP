#include <iostream>
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
    Date nxs;
public:
    void nhap();
    void xuat();
};

void Hang::nhap()
{
    cout<<"Nhap ma hang :";fflush(stdin);gets(maH);
    cout<<"Nhap ten Hang :";fflush(stdin);gets(name);
    cout<<"Nhap ngay : " ;cin>>nxs.d;
    cout<<"Nhap thang : " ;cin>>nxs.m;
    cout<<"Nhap nam : " ;cin>>nxs.y;
}

void Hang::xuat()
{
    cout<<"Nhap ma hang :"<<maH<<endl;
    cout<<"Nhap ten Hang :"<<name<<endl;
    cout<<"Nhap ngay san xuat : " <<nxs.d<<"/"<<nxs.d<<"/"<<nxs.d<<endl;
}

main()
{
    Hang h;
    h.nhap();
    cout<<"------------------------------"<<endl;
    h.xuat();
}
