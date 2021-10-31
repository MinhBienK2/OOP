#include <iostream>

using namespace std;

class Array
{
private:
    int *a;
    int n;
public:
    Array();
    Array(int n);
    ~Array();
    void nhap();
    void xuat();
};

Array::Array()
{
    n=0;
    a=NULL;
}

Array::Array(int n)
{
    this->n = n;
    a = new int[n];
    for(int i=0;i<n;i++)
        a[i] = 0;
}

Array::~Array()
{
     n = 0;
    delete[] a;
}

void Array::nhap(){
    cout<<"Nhap n = ";cin>>n;
    a = new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void Array::xuat(){
    for(int i=0;i<n;i++)
        cout<<a[i] <<" ";
}

int main()
{
    Array a(6);
    a.xuat();
    Array b;
    a.nhap();
    a.xuat();
}
