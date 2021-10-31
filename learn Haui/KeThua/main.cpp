#include <iostream>
using namespace std;

class Hang
{
protected:
    char maH[10];
    double dg;
    int sl;
public:
    void nhap();
    void xuat();
};

void Hang::nhap()
{
    cout<<"nhap ma hang : " ; fflush(stdin);gets(maH);
    cout<<"Nhap don gia : " ; cin>> dg;
    cout<<"Nhap so luong : " ; cin>> sl;
}

void Hang::xuat()
{
    cout<<" ma hang : " <<maH<<endl;
    cout<<" don gia : " <<dg<<endl;
    cout<<" so luong : " << sl<<endl;
}

class HangMayMac : public Hang
{
private:
    char cl[20];
    int size;
public:
    void nhap();
    void xuat();
};

void HangMayMac::nhap()
{
    Hang::nhap();
    cout<<" nhap chat luong : " ;fflush(stdin);gets(cl);
    cout<<" nhap size :"; cin>>cl;
}

void HangMayMac::xuat()
{
    Hang::xuat();
    cout<<" nhap chat luong"<<cl<<endl;
    cout<<" nhap size :"<<cl;
}


main()
{
    HangMayMac p;
    p.nhap();
    p.xuat();
}
