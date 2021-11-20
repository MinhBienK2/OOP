#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;


class Electronic
{
protected:
    double CS;
    double DA;
public :
    Electronic(double CS,double DA);
};

Electronic::Electronic(double CS,double DA)
{
    this->CS = CS;
    this->DA = DA;
}

class MayGiat : public Electronic
{
private:
    double DT;
    char loai[20];
public:
    MayGiat(double CS,double DA,double DT,char *loai);
    void xuat();
};

MayGiat::MayGiat(double CS,double DA,double DT,char *loai): Electronic(CS,DA)
{
    this->DT=DT;
    strcpy(this->loai,loai);
}

void MayGiat::xuat()
{
    cout<<left<<setw(10)<<CS<<setw(10)<<DA<<setw(10)<<DT<<setw(10)<<loai<<endl;
}


class TuLanh : public Electronic
{
private:
    double DT;
    char soNgan[20];
public:
    TuLanh(double CS,double DP,double DT,char *soNgan);
    void xuat();
};

TuLanh::TuLanh(double CS,double DA,double DT,char *soNgan): Electronic( CS, DA)
{
    this->DT=DT;
    strcpy(this->soNgan,soNgan);
}

void TuLanh::xuat()
{
    cout<<left<<setw(10)<<CS<<setw(10)<<DA<<setw(10)<<DT<<setw(10)<<soNgan<<endl;
}

 main()
{
    MayGiat a(1,2,3,"u");
    a.xuat();
    TuLanh b(1,2,3,"u");
    b.xuat();
}
