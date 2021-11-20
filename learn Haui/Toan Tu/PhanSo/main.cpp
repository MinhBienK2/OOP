#include <iostream>
using namespace std;

class PhanSo
{
private:
    int a;
    int b;
public :

    void nhap();
    void xuat();
    PhanSo operator+(PhanSo p);
    PhanSo operator-();
    double operator!();
};

void PhanSo::nhap()
{
    cout<<"nhap a =  " ;cin>>a;
    cout<<"Nhap b =  " ;cin>>b;
}

void PhanSo::xuat()
{
    cout<<a<<"/"<<b;
}

//PhanSo PhanSo::operator+(PhanSo p)
//{
//    PhanSo k;
//    k.a = a * p.b + b * p.a;
//    k.b = b * p.b;
//    return k;
//}

PhanSo PhanSo::operator+(PhanSo p)
{
    PhanSo k;
    a = a * p.b + b * p.a;
    b = b * p.b;
    return *this;
}

PhanSo PhanSo::operator-()
{
    a = -a;
    return *this;
}

double PhanSo::operator!()
{
    return (double)a/b;
}


int main()
{
    PhanSo q;
    PhanSo p;
    q.nhap();
    p.nhap();
    PhanSo j;
    j = p+q;
    j.xuat();
    cout<<"\n=====================\n";
    p = -p;
    p.xuat();
    cout<<"\n=====================\n";
    cout<<!q;

}
