#include <iostream>
#include<iomanip>
using namespace std;


class NCC
{
private:
    char maN[10];
    char nameN[30];
    char dc[40];
public:
    void nhap();
    void xuat();
};

void NCC::nhap()
{
    cout<<"Enter ma NCC : " ;fflush(stdin);gets(maN);
     cout<<"Enter ten NCC : " ;fflush(stdin);gets(nameN);
      cout<<"Enter dia chi : " ;fflush(stdin);gets(dc);
}

void NCC::xuat()
{
    cout<<" ma NCC : "<<maN;
    cout<<"\t ten NCC : " <<nameN<<endl;
    cout<<" dia chi : " <<dc<<endl;
}

class SP
{
private:
    char nameS[20];
    double dg;
    int sl;
public:
    void nhap();
    void xuat();
    friend class Phieu;
};

void SP::nhap()
{
    cout<<"Enter ten SP : " ;fflush(stdin);gets(nameS);
     cout<<"Enter don gia : " ;cin>>dg;
      cout<<"Enter so luong: " ;cin>>sl;
}

void SP::xuat()
{
    cout<<setw(20)<<nameS<<setw(20)<<dg<<setw(20)<<sl<<setw(20)<<dg*sl<<endl;
}

class Phieu
{
private:
    char maP[10];
    char date[14];
    NCC x;
    SP *y;
    int n;
public:
    void nhap();
    void xuat();
};

void Phieu::nhap()
{
    cout<<"Enter ma phieu : " ;fflush(stdin);gets(maP);
    cout<<"Enter date : " ;fflush(stdin);gets(date);
    x.nhap();
    cout<<"Enter n : ";cin>>n;
    y = new SP[n];
    for(int i=0;i<n;i++)
        y[i].nhap();
}

void Phieu::xuat()
{
    cout<<" ma phieu : " <<maP;
     cout<<" date : " <<date<<endl;
     x.xuat();
     double tong =0;
      cout<<setw(20)<<"ten hang "<<setw(20)<<"don gai"<<setw(20)<<"so luong "<<setw(20)<<"thanh tien"<<endl;
     for(int i=0;i<n;i++){
        y[i].xuat();
        tong+=y[i].sl*y[i].dg;
     }

    cout<<setw(40)<<"cong thanh tien"<<setw(20)<<tong<<endl;
}


int main()
{
    Phieu a;
    cout<<"\t\t\tPhieu nhap Hang"<<endl;
    a.nhap();
    a.xuat();

}
