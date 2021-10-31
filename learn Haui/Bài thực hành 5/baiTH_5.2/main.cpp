#include <iostream>
#include<iomanip>
using namespace std;

class SV
{
    char ma[10];
    char name[30];
    char lop[10];
    char khoa[10];
public:
    void nhap();
    void xuat();
};

void SV::nhap()
{
    cout<<"ENter ma sinh vien : " ;fflush(stdin);gets(ma);
    cout<<"ENter ten sinh vien : " ;fflush(stdin);gets(name);
    cout<<"ENter lop : " ;fflush(stdin);gets(lop);
    cout<<"ENter Khoa : " ;fflush(stdin);gets(khoa);
}

void SV::xuat()
{
    cout<<" ma sinh vien : " <<ma;
    cout<<" ten sinh vien : " <<name<<endl;
    cout<<" lop : " <<lop;
    cout<<" Khoa : "<<khoa<<endl;
}


class BangDiem
{
private:
    char tenM[30];
    int soT;
    double diem;
public:
    void nhap();
    void xuat();
    friend class Phieu;
};

void BangDiem::nhap()
{
    cout<<"ENter ten mon : " ;fflush(stdin);gets(tenM);
    cout<<"ENter so trinh : " ;cin>>soT;
    cout<<"ENter diem : " ;cin>>diem;
}

void BangDiem::xuat()
{
    cout<<setw(20)<<tenM<<setw(20)<<soT<<setw(20)<<diem<<endl;
}

class Phieu
{
private:
    SV x;
    BangDiem *y;
    int n;
public:
    void nhap();
    void xuat();
};

void Phieu::nhap()
{
    x.nhap();
    cout<<"enter n = ";cin>>n;
    y= new BangDiem[n];
    for(int i=0;i<n;i++)
        y[i].nhap();
}

void Phieu::xuat()
{
   x.xuat();
    double tong=0;
    int sumSoT=0;
    cout<<setw(20)<<"ten mon"<<setw(20)<<"so trinh"<<setw(20)<<"diem"<<endl;
    for(int i=0;i<n;i++)
    {
        y[i].xuat();
        sumSoT+=y[i].soT;
    }
    for(int i=0;i<n;i++)
        tong+=(y[i].soT*y[i].diem);
    cout<<setw(20)<<"tong trung binh : " << tong/sumSoT<<endl;
}


int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
}
