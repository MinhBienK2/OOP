#include <iostream>

using namespace std;

class Date
{
private:
    int d;
    int m;
    int y;
public:
    void nhap();
    void xuat();
};

void Date::nhap()
{
    cout<<"Nhap ngay :" ;cin>>d;
    cout<<"Nhap thang :" ;cin>>m;
    cout<<"Nhap nam :" ;cin>>y;
}

void Date::xuat()
{
    cout<<"Ngay thang :" <<d<<"/"<<m<<"/"<<y<<endl;

}

class NhanSu
{
private:
    char maNS[10];
    char ten[30];
    Date ns;
public:
    void nhap();
    void xuat();
};

void NhanSu::nhap()
{
    cout<<"Nhap ma nhan su :" ;fflush(stdin);gets(maNS);
    cout<<"Nhap ho va ten :" ;fflush(stdin);gets(ten);
    ns.nhap();
}

void NhanSu::xuat()
{
    cout<<" ma nhan su :"<<maNS<<endl;
    cout<<" ho va ten :" <<ten<<endl;
    ns.xuat();
}

 main()
{
    NhanSu a;
    a.nhap();
    a.xuat();
}
