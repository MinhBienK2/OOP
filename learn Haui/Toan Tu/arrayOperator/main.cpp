#include <iostream>
using namespace std;

class Array
{
private:
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    Array operator+(Array p);
    Array operator-();
    int operator!();
};

void Array::nhap()
{
    cout<<"Nhap n = " ; cin>>n;
    a = new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void Array::xuat()
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

Array Array::operator+(Array p)
{
    if(n == p.n)
        for(int i=0;i<n;i++)
            a[i]=a[i]+p.a[i];
    else
        n =0;
        a[n]=NULL;
    return *this;
}

Array Array::operator-()
{
    for(int i=0;i<n;i++)
        a[i] = -a[i];
    return *this;
}

int Array::operator!()
{
    int max = a[0];
    for(int i=0;i<n;i++)
        if(max<a[i])
            max = a[i];
    return max;
}

int main()
{
    Array q;
    Array p;
    Array k;
    q.nhap();
    p.nhap();
    k = q+p;
    k.xuat();
    cout<<endl<<"========================="<<endl;
    k = -k;
    k.xuat();
     cout<<endl<<"========================="<<endl;
    cout<<"max mang : "<<!k;
}
