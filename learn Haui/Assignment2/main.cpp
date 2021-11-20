#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

class LopHoc;

class Nguoi
{
protected:
    char ten[30];
    char ngaySinh[12];
    char que[20];
public:
    void nhap();
    void xuat();
};

void Nguoi::nhap()
{
    cout<<"nhap ho ten : " ;fflush(stdin);gets(ten);
    cout<<"nhap ngay sinh : " ;fflush(stdin);gets(ngaySinh);
    cout<<"nhap que quan : " ;fflush(stdin);gets(que);
}

void Nguoi::xuat()
{
    cout<<left<<setw(20)<<ten<<setw(20)<<ngaySinh<<setw(20)<<que;
}

class SinhVien : public Nguoi
{
private:
    char maSV[10];
    char nganh[20];
    int khoaHoc;
public:
    void nhap();
    void xuat();
    friend int kt(LopHoc a,int s);
    friend void sort(LopHoc a);
};

void SinhVien::nhap()
{
    Nguoi::nhap();
    cout<<"nhap ma sinh vien : " ;fflush(stdin);gets(maSV);
    cout<<"nhap ma nganh : " ;fflush(stdin);gets(nganh);
    cout<<"nhap khoa hoc : " ;cin>>khoaHoc;
}

void SinhVien::xuat()
{
    Nguoi::xuat();
    cout<<setw(20)<<maSV<<setw(20)<<nganh<<setw(20)<<khoaHoc<<endl;
}

class LopHoc
{
private:
    char maL[20];
    char tenL[30];
    char ngayM[12];
    SinhVien *x;
    int n;
    char gv[20];
public:
    void nhap();
    void xuat();
    friend int kt(LopHoc a,int s);
    friend void sort(LopHoc a);
};

void LopHoc::nhap()
{
    cout<<"nhap ma lop hoc: ";fflush(stdin);gets(maL);
    cout<<"nhap ten lop hoc: ";fflush(stdin);gets(tenL);
    cout<<"nhap ngay mo: ";fflush(stdin);gets(ngayM);
    cout<<"Nhap n = ";cin>>n;
    x = new SinhVien[n];
    for(int i=0;i<n;i++)
        x[i].nhap();
    cout<<"nhap Giao vien : ";fflush(stdin);gets(gv);
}

void LopHoc::xuat()
{
    cout<<" ma lop hoc: "<<maL;
    cout<<" \t\tten lop hoc: "<<tenL<<endl;
    cout<<" ngay mo: "<<ngayM<<endl;
    cout<<left<<setw(20)<<"ho ten"<<setw(20)<<"ngay sinh"<<setw(20)<<"que quan"<<setw(20)<<"maSV"<<setw(20)<<"nganh"<<setw(20)<<"khoaHoc"<<endl;
    for(int i=0;i<n;i++)
        x[i].xuat();
    cout<<" Giao vien : "<<gv<<endl;
}

int kt(LopHoc a,int s)
{
    int count=0;
    for(int i=0;i<a.n;i++)
        if(a.x[i].khoaHoc == s)
            count++;
    return count;
}

void sort(LopHoc a)
{
    for(int i=0;i<a.n;i++)
        for(int j=i+1;j<a.n;j++)
            if(a.x[i].khoaHoc>a.x[j].khoaHoc)
                swap(a.x[i],a.x[j]);

}

int main()
{
    LopHoc a;
    a.nhap();
    cout<<endl<<"------------------------------"<<endl;
    a.xuat();
    cout<<endl<<"kiem tra khoa 11 : "<<kt(a,11)<<endl;
    cout<<endl<<"sap xep : "<<endl;
    sort(a);
    a.xuat();
}

