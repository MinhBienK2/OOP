#include<bits/stdc++.h>
//#include <iostream>
//#include<iomanip>
using namespace std;

class Phieu;

class Date
{
private:
    char date[20];
public:
    void nhap();
    void xuat();
};

class NCC
{
private:
    char maNCC[10];
    char tenNCC[30];
public:
    void nhap();
    void xuat();
};

class Diachi
{
private:
    char dc[30];
    char sdt[13];
public:
    void nhap();
    void xuat();
};

class SP
{
public:
    char maSP[10];
    char tenSP[30];
    int sl;
    double dg;
public:
    void nhap();
    void xuat();
    friend class Phieu;
    friend void sapxep(Phieu p);
};

void Date::nhap()
{
    cout<<"Nhap ngay thanh lap: ";fflush(stdin);gets(date);
}

void Date::xuat()
{
    cout<<"    Ngay thanh lap: "<<date<<endl;
}

void NCC::nhap()
{
    cout<<"Nhap ma ncc:";fflush(stdin);gets(maNCC);
    cout<<"Nhap ten ncc:";fflush(stdin);gets(tenNCC);
}

void NCC::xuat()
{
    cout<<"ma nha cung cap:"<<maNCC<<"   ten ncc:"<<tenNCC<<endl;
}

void Diachi::nhap()
{
    cout<<"Nhap dia chi:";fflush(stdin);gets(dc);
    cout<<"Nhap SDT:";fflush(stdin);gets(sdt);
}

void Diachi::xuat()
{
     cout<<"Dia chi:"<<dc<<"   SDT:"<<sdt<<endl;
}

void SP::nhap()
{
    cout<<"Nhap Ma sp:";fflush(stdin);gets(maSP);
    cout<<"Nhap ten sp:";fflush(stdin);gets(tenSP);
    cout<<"NHap so luong:";cin>>sl;
    cout<<"NHap don gia: ";cin>>dg;
}

void SP::xuat()
{
    cout<<left<<setw(20)<<maSP<<setw(20)<<tenSP<<setw(20)<<sl<<setw(20)<<dg<<setw(20)<<sl*dg<<endl;
}
//---------------------------------------
class Phieu
{
private:
    char maP[10];
    Date x;
    NCC y;
    Diachi d;
    SP *z;
    int n;
public:
    void nhap();
    void xuat();
    friend void kiemtra(Phieu p);
    friend void sapxep(Phieu p);
};

void Phieu::nhap()
{
    cout<<"Nhap Ma phieu:";fflush(stdin);gets(maP);
    x.nhap();
    y.nhap();
    d.nhap();
    cout<<"Nhap n = " ;cin>>n;
    z = new SP[n];
    for(int i=0;i<n;i++)
        z[i].nhap();
}

void Phieu::xuat()
{
    cout<<"dai hoc victory"<<endl;
    cout<<setw(40)<<"PHIEU NHAP VAN PHONG PHAM"<<endl;
    cout<<"Ma phieu"<<maP;
    x.xuat();
    y.xuat();
    d.xuat();
    cout<<left<<setw(20)<<"Ma SP"<<setw(20)<<"ten san pham"<<setw(20)<<"so luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
    for(int i=0;i<n;i++)
        z[i].xuat();
    double sum=0;
    for(int i=0;i<n;i++)
        sum+=z[i].sl*z[i].dg;
    cout<<right<<setw(40)<<"TONG"<<setw(40)<<sum<<endl;
}

void kiemtra(Phieu p)
{
    int count=0;
    for(int i=0;i<p.n;i++)
        count++;
    cout<<"So luong san pham la :"<<count<<endl;
}

void sapxep(Phieu p)
{
    for(int i=0;i<p.n;i++)
        for(int j=i+1;j<p.n;j++)
            if(p.z[i].dg > p.z[j].dg)
                swap(p.z[i],p.z[j]);
}

 main()
{
    Phieu p;
    p.nhap();
    p.xuat();
    cout<<endl<<"-----------------------------------------"<<endl;
    kiemtra(p);
    sapxep(p);
    p.xuat();
}
