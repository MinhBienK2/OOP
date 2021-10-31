#include <bits/stdc++.h>

using namespace std;
class TIVI;

class NSX
{
    char TENNSX[30];
    char DIACHI[30];
public:
    void nhap();
    void xuat();
};

void NSX::nhap()
{
    cout<<"Ten NSX: "; fflush(stdin); gets(TENNSX);
    cout<<"Dia chi: "; fflush(stdin); gets(DIACHI);
}
void NSX::xuat()
{
    cout<<"Ten NSX: "<<TENNSX<<endl;
    cout<<"Dia chi: "<<DIACHI<<endl;
}

class DATE
{
    int D, M, Y;
public:
    void nhap();
    void xuat();
};
void DATE::nhap()
{
    cout<<"Ngay : "; cin>>D;
    cout<<"Thang: "; cin>>M;
    cout<<"Nam  : "; cin>>Y;
}
void DATE::xuat()
{
    cout<<D<<"/"<<M<<"/"<<Y<<endl;
}

class HANG
{
protected:
    char TENH[30];
    NSX x;
    int GIA;
public:
    void nhap();
    void xuat();
    friend void XOA(TIVI*&k, int &n);
    friend void SUA(TIVI*k, int n);
};

void HANG::nhap()
{
    cout<<"Ten hang : "; fflush(stdin); gets(TENH);
    cout<<"Nha san xuat: "<<endl;
    x.nhap();
    cout<<"Don gia  : "; cin>>GIA;
}

void HANG::xuat()
{
    cout<<"Ten hang : "<<TENH<<endl;
    x.xuat();
    cout<<"Don gia  : "<<GIA<<endl;
}

class TIVI : private HANG
{
    int KICHTHUOC;
    DATE NGAYNHAP;
public:
    void nhap();
    void xuat();
    friend void XOA(TIVI*&k, int &n);
    friend void SUA(TIVI*k, int n);
};

void TIVI::nhap()
{
    HANG::nhap();
    cout<<"Kich thuoc: "; cin>>KICHTHUOC;
    NGAYNHAP.nhap();
}
void TIVI::xuat()
{
    HANG::xuat();
    cout<<"Kich thuoc: "<<KICHTHUOC<<endl;
    NGAYNHAP.xuat();
}


void SUA(TIVI*k, int n)
{
    for(int i=0; i<n; i++)
        k[i].GIA = k[i].GIA + 1000;
}
void XOA(TIVI*&k, int &n)
{
    for(int i=0; i<n; i++)
    while (k[i].GIA < 2000 && i<n-1)
    {
        for(int j=i+1; j<n; j++)
            k[j-1]=k[j];
        n--;
        k = (TIVI*) realloc(k, n*sizeof(TIVI));
    }
}





int main()
{
    TIVI *k; int n;
    cout<<"n="; cin>>n;
    k = (TIVI*) malloc(n*sizeof(TIVI));
    for(int i=0; i<n; i++)
        k[i].nhap();

    SUA(k, n);
    cout<<endl<<"SAU KHI SUA:"<<endl;
    for(int i=0; i<n; i++)
        k[i].xuat();

    XOA(k, n);
    cout<<endl<<"SAU KHI XOA:"<<endl;
    for(int i=0; i<n; i++)
        k[i].xuat();
}




