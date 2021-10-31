#include <iostream>
#include<math.h>
using namespace std;

class Bac2
{
private:
    int a;
    int b;
    int c;
public:
    Bac2();
    Bac2(int a,int b,int c);
    void nhap();
    void xuat();
    void giaiPT();
};

Bac2::Bac2()
{
    a=0;
    b=0;
    c=0;
}

Bac2::Bac2(int a , int b , int c)
{
   this->a = a;
   this->b = b;
   this->c = c;
}

void Bac2::nhap()
{
    cout<<"Nhap a : ";cin>>a;
    cout<<"Nhap b : ";cin>>b;
    cout<<"Nhap c : ";cin>>c;
}

void Bac2::xuat()
{
    cout<<a<<"x2 + "<<b<<"x + "<<c<< " = 0 "<<endl;
}

void Bac2::giaiPT()
{
    int deta = b*b-(4*a*c);
    if(deta < 0 )
        cout<<"Phuong trinh vo nghiem !"<<endl;
    else if(deta == 0)
        cout<<"x1 = x2 = "<<(double)-b/(2*a)<<endl;
    else
    {
        cout<<"x1 = "<< (double)(-b + sqrt(deta))/(2*a)<<endl;
        cout<<"x2 = "<< (double)(-b - sqrt(deta))/(2*a)<<endl;
    }

}

int main()
{
    Bac2 p(3,5,2);
    p.xuat();
    p.giaiPT();
    cout<<"-------------------------------------------"<<endl;
    Bac2 s;
    s.nhap();
    s.xuat();
    s.giaiPT();
}
