#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

class SinhVien
{
private:
    char maSV[10];
    char ten[30];
    double toan;
    double ly;
    double hoa;
public:
    void nhap();
    void xuat();
    friend void sapxep(SinhVien *a,int n);
};

void SinhVien::nhap()
{
    cout<<"Nhap ma sv : ";fflush(stdin);gets(maSV);
    cout<<"Nhap ten sv : ";fflush(stdin);gets(ten);
    cout<<"Nhap diem toan : ";cin>>toan;
    cout<<"Nhap diem ly : ";cin>>ly;
    cout<<"Nhap diem hoa : ";cin>>hoa;
}

void SinhVien::xuat()
{
    cout<<" ma sv : "<<maSV;
    cout<<" \tten sv : "<<ten<<endl;
    cout<<setw(20)<<toan<<setw(20)<<ly<<setw(20)<<hoa<<setw(20)<<toan+ly+hoa<<endl;
}

void sapxep(SinhVien *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
            if(a[i].toan + a[i].ly + a[i].hoa >a[j].toan + a[j].ly + a[j].hoa )
                swap(a[i],a[j]);
    }
}
main()
{
    int n;
    SinhVien *a;
    cout<<"Nhap n = ";cin>>n;
    a = new SinhVien[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    sapxep(a,n);
    for(int i=0;i<n;i++)
        a[i].xuat();
}
