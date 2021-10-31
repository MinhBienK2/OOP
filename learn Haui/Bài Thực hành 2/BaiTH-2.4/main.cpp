#include <iostream>
#include<iomanip>
using namespace std;

class DN
{
private:
    char ten[30];
    char dc[40];
    int nv;
    double dt;
public:
    void nhap();
    void xuat();
};

void DN::nhap()
{
    cout<<"ten doanh nghiem:";fflush(stdin);gets(ten);
    cout<<"nhap dia chi: " ;fflush(stdin);gets(dc);
    cout<<"Nhap so nhan vien: ";cin>>nv;
    cout<<"Nhap so doanh thu: ";cin>>dt;
}

void DN::xuat()
{
    cout<<setw(30)<<ten<<setw(30)<<dc<<setw(30)<<nv<<setw(30)<<dt<<endl;
}

 main()
{
    DN *a;
    int n;
    cout<<"NHap so Doanh nghien : " ;cin>>n;
    a = new DN[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    cout<<setw(30)<<"Ten doanh nghiem"<<setw(30)<<"Dia chi"<<setw(30)<<"So nhan vien"<<setw(30)<<"Doanh thu"<<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
}
