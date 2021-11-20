#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

class BanHang;

class Date
{
private:
    int d;
    int m;
    int y;
public:
    friend class BanHang;
    friend void hienThi(BanHang *a,int n);
};

class LoaiHang
{
private:
    int maLoai;
    char tenL[20];
public:
    friend class BanHang;
};

class BanHang
{
private:
    int maHang;
    char tenH[18];
    Date ns;
    LoaiHang x;
    float donGia;
    int soLuong;
public:
    void nhap();
    void xuat();
    friend void hienThi(BanHang *a,int n);
};

void BanHang::nhap()
{
    cout<<"nhap ma hang : ";cin>>maHang;
    cout<<"Nhap ten hang : " ;fflush(stdin);gets(tenH);
    cout<<"nhap ngay :";cin>>ns.d;
    cout<<"nhap thang :";cin>>ns.m;
    cout<<"nhap nam :";cin>>ns.y;
        cout<<"Nhap ma loai :" ;cin>>x.maLoai;
        cout<<"nhap ten loai :" ;fflush(stdin);gets(x.tenL);
    cout<<"nhap don gia : " ;cin>>donGia;
    cout<<"nhap so luong : " ;cin>>soLuong;
}

void BanHang::xuat()
{
     cout<<setw(20)<<maHang<<setw(20)<<tenH<<setw(20)<<ns.d<<"/"<<ns.m<<"/"<<ns.y<<setw(20)<<x.maLoai<<setw(20)<<x.tenL<<setw(20)<<donGia<<setw(20)<<soLuong<<endl;
}

void hienThi(BanHang *a,int n)
{
    for(int i =0;i<n;i++)
        if(a[i].ns.y ==2019)
            a[i].xuat();
}


 main()
{
    BanHang *a;
    int n;
    cout<<"nhap n = ";cin>>n;
     a = new BanHang[n];
    for(int i = 0;i<n;i++)
        a[i].nhap();
    cout<<setw(20)<<"maHang"<<setw(20)<<"tenH"<<setw(20)<<"ngay thang"<<setw(20)<<"maLoai"<<setw(20)<<"tenL"<<setw(20)<<"donGia"<<setw(20)<<"soLuong"<<endl;
    for(int i = 0;i<n;i++)
    {
        //cout<<"mat hang "<< n<<endl;
        a[i].xuat();
    }
    cout<<endl;
    cout<<setw(20)<<"maHang"<<setw(20)<<"tenH"<<setw(20)<<"ngay thang"<<setw(20)<<"maLoai"<<setw(20)<<"tenL"<<setw(20)<<"donGia"<<setw(20)<<"soLuong"<<endl;
    hienThi(a,n);

}
