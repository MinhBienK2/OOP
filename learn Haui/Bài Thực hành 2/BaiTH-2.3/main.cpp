#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    double *a;
    int n;
public:
    void nhap();
    void xuat();
    double lon();
    double nho();
    //void sap();
  //  friend void sapxep(Array a);

};

void Array::nhap()
{
    cout<<"Nhap n : ";cin>>n;
    a=new double[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void Array::xuat()
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

double Array::lon()
{
    double max = a[0];
    for(int i=0;i<n;i++)
        if(max < a[i])
            max = a[i];
    return max;
}

double Array::nho()
{
    double min = a[0];
    for(int i=0;i<n;i++)
        if(min > a[i])
            min = a[i];
    return min;
}

/*
void Array::sap()
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
                swap(a[i],a[j]);
}
*/
/*
void sapxep(Array a)
{
    for(int i=0;i<a.n;i++)
        for(int j=i+1;j<a.n;j++)
            if(a[i]>a[j])
                swap(a[i],a[j]);
}
*/


int main()
{
    Array a;
    a.nhap();
    //sapxep(a);
    //a.sap();
    a.xuat();

    cout<<endl<<"so lon la : "<<a.lon() <<"so nho la : "<<a.nho()<<endl;
}
