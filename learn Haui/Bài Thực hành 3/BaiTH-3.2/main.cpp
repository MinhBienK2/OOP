#include <iostream>
using namespace std;

class NSX
{
private:
    char maNSX[10];
    char TenNSX[30];
    char dc[30];
public:
    void nhap();
    void xuat();
};

void NSX::nhap()
{
    cout<<"Nhap ma nsx :" ; fflush(stdin);gets(maNSX);
    cout<<"Nhap ten nsx :" ; fflush(stdin);gets(TenNSX);
    cout<<"Nhap dc nsx :" ; fflush(stdin);gets(dc);
}

void NSX::xuat()
{
    cout<<" ma nsx :" <<maNSX<<endl;
    cout<<" ten nsx :" <<TenNSX<<endl;
    cout<<" dc nsx :" <<dc<<endl;
}

class Hang
{
private:
    char maH[10];
    char tenH[30];
    NSX x;
public:
    void nhap();
    void xuat();
};

void Hang::nhap()
{
    cout<<"Nhap ma hang :" ; fflush(stdin);gets(maH);
    cout<<"Nhap ten hang :" ; fflush(stdin);gets(tenH);
    x.nhap();
}

void Hang::xuat()
{
    cout<<" ma nsx :" <<maH<<endl;
    cout<<" ten nsx :" <<tenH<<endl;
    x.xuat();
}

main()
{
    Hang a;
    a.nhap();
    a.xuat();
}
