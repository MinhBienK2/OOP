//#include <iostream>
//#include<iomanip>
//#include<string.h>
//#include<math.h>
#include <bits/stdc++.h>
using namespace std;

class Phieu;

class NV
{
private:
    char kiemk[20];
    char cv[10];
public:
    void nhap();
    void xuat();
};

void NV::nhap()
{
    cout<<"Nhap ten nv : ";fflush(stdin);gets(kiemk);
    cout<<"Nhap chuc vu : ";fflush(stdin);gets(cv);
}

void NV::xuat()
{
    cout<<"nhan vien kiem ke : "<<kiemk;
    cout<<"  chuc vu : "<<cv<<endl;
}

class Phong
{
private:
    char kkP[30];
    char maP[10];
    char tP[30];
public:
    void nhap();
    void xuat();
};

void Phong::nhap()
{
    cout<<"Nhap Kiem ke tai phong : ";fflush(stdin);gets(kkP);
    cout<<"Nhap ma phong: ";fflush(stdin);gets(maP);
    cout<<"Nhap Truong phong: ";fflush(stdin);gets(tP);
}

void Phong::xuat()
{
    cout<<" Kiem ke tai phong : "<<kkP;
    cout<<" ma phong: "<<maP<<endl;
    cout<<" Truong phong: "<<tP<<endl;
}

class SP
{
private:
    char nameS[20];
    int sl;
    char tt[20];
public:
    void nhap();
    void xuat();
    friend class Phieu;
    friend void SuaL(Phieu a);
    friend void sapxep(Phieu a);
};

void SP::nhap()
{
    cout<<"Nhap ten tai san : ";fflush(stdin);gets(nameS);
    cout<<"Nhap so luong: ";cin>>sl;
    cout<<"Nhap tinh trang :  ";fflush(stdin);gets(tt);
}

void SP::xuat()
{
    cout<<setw(20)<<nameS<<setw(20)<<sl<<setw(20)<<tt<<endl;
}

class Phieu
{
private:
    char maPh[10];
    char date[20];
    NV x;
    Phong y;
    SP *z;
    int n;
public:
    void nhap();
    void xuat();
    friend void SuaL(Phieu a);
    friend void sapxep(Phieu a);
};

void Phieu::nhap()
{
    cout<<"Nhap ma phieu : ";fflush(stdin);gets(maPh);
    cout<<"Nhap Ngay kiem ke :  ";fflush(stdin);gets(date);
    x.nhap();
    y.nhap();
    cout<<"Nhap n : ";cin>>n;
    z = new SP[n];
    for(int i=0;i<n;i++)
        z[i].nhap();
}

void Phieu::xuat()
{
    cout<<"Nhap ma phieu : "<<maPh;
    cout<<"Nhap Ngay kiem ke :  "<<date<<endl;
    x.xuat();
    y.xuat();
    int tong=0;
    cout<<setw(20)<<"ten tai san"<<setw(20)<<"so luong"<<setw(20)<<"tinh trang"<<endl;
    for(int i=0;i<n;i++)
    {
        z[i].xuat();
        tong+=z[i].sl;
    }
    cout<<"so tai san da kiem ke :"<<n;
    cout<<"\t tong so luong : "<<tong<<endl;
}

void SuaL(Phieu a){
    for(int i=0;i<a.n;i++)
       if(strcmp(a.z[i].nameS,"May vi tinh") == 0)
            a.z[i].sl=20;
}

void sapxep(Phieu a)
{
    for(int i=0;i<a.n;i++)
    {
        for(int j=i+1;j<a.n;j++)
            if(a.z[i].sl > a.z[j].sl)
                swap(a.z[i],a.z[j]);
    }
}


int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    cout<<"----------------------------"<<endl;
    SuaL(a);
    a.xuat();
     cout<<"----------------------------"<<endl;
    sapxep(a);
    a.xuat();
}
