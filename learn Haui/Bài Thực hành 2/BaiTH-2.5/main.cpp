#include <iostream>
#include<iomanip>
using namespace std;

class Oto
{
private:
    char ma[10];
    double gia;
    int nam;
    double khauHao;
public:
    double tong();
    void nhap();
    void xuat();
};

void Oto::nhap()
{
    cout<<"NHap ma oto: " ;fflush(stdin);gets(ma);
    cout<<"NHap gia mua moi : " ;cin>>gia;
    cout<<"NHap nam su dung : " ;cin>>nam;
    cout<<"NHap ti le khau hao / nam : " ;cin>>khauHao;
}

void Oto::xuat()
{
    cout<<setw(20)<<ma<<setw(20);
    cout<<gia<<setw(20);
    cout<<nam<<setw(20);
    cout<<khauHao<<setw(20);
    cout<<tong()<<endl;

}

double Oto::tong()
{
    double giaHT=gia;
    for(int i=0;i<nam;i++)
        giaHT-=gia*khauHao/100;
    return giaHT;
}

int main()
{
    Oto *a;
    int n;
    cout<<"NHap n : ";cin>>n;
    a =new Oto[n];
    for(int i=0;i<n;i++)
        a[i].nhap();
    cout<<setw(20)<<" ma oto: " <<setw(20);
    cout<<" gia mua moi : "<<setw(20);
    cout<<" nam su dung : " <<setw(20);
    cout<<" ti le khau hao / nam : "<<setw(20);
    cout<<" gia tri HT" <<endl;
    for(int i=0;i<n;i++)
        a[i].xuat();
}
