#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    void sap();
    friend void sapxep(Array p);

};

void Array::nhap()
{
    cout<<"Nhap n : ";cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void Array::xuat()
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

void Array::sap()
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
                swap(a[i],a[j]);
}


void sapxep(Array p)
{
    for(int i=0;i<p.n;i++)
        for(int j=i+1;j<p.n;j++)
            if(p.a[i]>p.a[j])
                swap(p.a[i],p.a[j]);
}


int main()
{
    Array p;
    p.nhap();
    sapxep(p);
    //p.sap();
    p.xuat();
}
