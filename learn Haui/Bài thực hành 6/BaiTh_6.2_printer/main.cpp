#include <iostream>
using namespace std;

class Dotprinter;
class Laseprinter;

class Printer
{
protected:
    double TL;
    char hang[30];
    int nam;
    double TD;
public :
    friend void sua(Dotprinter &a,Laseprinter &b);
};

class Dotprinter : public Printer
{
private:
    double MDK;
public:
    void nhap();
    void xuat();
    friend void sua(Dotprinter &a,Laseprinter &b);
};

void Dotprinter::nhap()
{
    cout<<"Enter tong luong: " ;cin>>TL;
    cout<<"Enter hang sx : " ;fflush(stdin);gets(hang);
    cout<<"Enter nam sx: " ;cin>>nam;
    cout<<"Enter toc do: " ;cin>>TD;
    cout<<"Enter mat do kim: " ;cin>>MDK;
}

void Dotprinter::xuat()
{
    cout<<" tong luong: " <<TL<<endl;
    cout<<" hang sx : " <<hang<<endl;
    cout<<" nam sx: " <<nam<<endl;
    cout<<" toc do: " <<TD<<endl;
    cout<<"Mat do kim: " <<MDK<<endl;
}

class Laseprinter : public Printer
{
private:
    double DPG;
public:
    void nhap();
    void xuat();
    friend void sua(Dotprinter &a,Laseprinter &b);
};

void Laseprinter::nhap()
{
    cout<<"Enter tong luong: " ;cin>>TL;
    cout<<"Enter hang sx : " ;fflush(stdin);gets(hang);
    cout<<"Enter nam sx: " ;cin>>nam;
    cout<<"Enter toc do: " ;cin>>TD;
    cout<<"Enter do phan giai: " ;cin>>DPG;
}

void Laseprinter::xuat()
{
    cout<<" tong luong: " <<TL<<endl;
    cout<<" hang sx : " <<hang<<endl;
    cout<<" nam sx: " <<nam<<endl;
    cout<<" toc do: " <<TD<<endl;
    cout<<"do phan giai: " <<DPG<<endl;
}

void sua(Dotprinter &a,Laseprinter &b)
{
    a.nam = 2021;
    b.nam = 2021;
}

 main()
{
    Dotprinter a;
    a.nhap();
    cout<<" may Dotprinter --------------"<<endl;
    a.xuat();
    Laseprinter b;
    b.nhap();
    cout<<" may Laseprinter --------------"<<endl;
    b.xuat();

    sua(a,b);
    cout<<" may Dotprinter --------------"<<endl;
    a.xuat();
     cout<<" may Laseprinter --------------"<<endl;
    b.xuat();
}
