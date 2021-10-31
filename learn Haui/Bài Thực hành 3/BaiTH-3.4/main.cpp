#include <iostream>
#include<iomanip>
#include<math.h>
#include<string.h>
using namespace std;

class PhongMay;

class QuanLy
{
private:
    char maQL[10];
    char ten[30];
public:
    void nhap();
    void xuat();
};

void QuanLy::nhap()
{
    cout<<"Nhap ma quan ly : ";fflush(stdin);gets(maQL);
    cout<<"Nhap ho ten : ";fflush(stdin);gets(ten);
}

void QuanLy::xuat()
{
    cout<<" ma quan ly : "<<maQL;
    cout<<"\tho ten : "<<ten<<endl;
}

class May
{
private:
    char maM[10];
    char kieuM[30];
    char tinhT[30];
public:
    void nhap();
    void xuat();
    friend void suaGT(PhongMay a);
};

void May::nhap()
{
    cout<<"Nhap ma may : ";fflush(stdin);gets(maM);
    cout<<"Nhap Kieu may : ";fflush(stdin);gets(kieuM);
    cout<<"Nhap tinh trang: ";fflush(stdin);gets(tinhT);
}

void May::xuat()
{
    cout<<setw(10)<<maM<<setw(20)<<kieuM<<setw(20)<<tinhT<<endl;
}
class PhongMay
{
private:
    char maP[10];
    char tenP[30];
    double dt;
    QuanLy x;
    May *y;
    int n;
public:
    void nhap();
    void xuat();
    friend void suaGT(PhongMay a);
    friend void suaDT(PhongMay &a);
};

void PhongMay::nhap()
{
    cout<<"Nhap ma Phong : ";fflush(stdin);gets(maP);
    cout<<"Nhap ten phong : ";fflush(stdin);gets(tenP);
    cout<<"Nhap dien tich";cin>>dt;
    x.nhap();
    cout<<"NHap n = ";cin>>n;
    y = new May[n];
    for(int i=0;i<n;i++)
        y[i].nhap();
}

void PhongMay::xuat()
{
    cout<<" ma Phong : "<<maP;
    cout<<" ten phong : "<<tenP<<endl;
    cout<<" dien tich : "<<dt<<endl;
    x.xuat();
    cout<<setw(10)<<"ma may"<<setw(20)<<"kieu may"<<setw(20)<<"tinh trang"<<endl;
    for(int i=0;i<n;i++)
        y[i].xuat();
}

void suaGT(PhongMay a)
{
    for(int i=0;i<a.n;i++)
    {
        if(strcmp(a.y[i].maM ,"MS001")==0)
            strcpy(a.y[i].tinhT,"Tot");
    }
}

void suaDT(PhongMay &a)
{
     for(int i=0;i<a.n;i++)
    {
        a.dt = 50;
    }
}

 main()
{
    PhongMay pm;
    pm.nhap();
    cout<<"------------------------------------------"<<endl;
    pm.xuat();
    cout<<"------------------------------------------"<<endl;
    suaGT(pm);
    pm.xuat();
    cout<<"------------------------------------------"<<endl;
    suaDT(pm);
    pm.xuat();
}
