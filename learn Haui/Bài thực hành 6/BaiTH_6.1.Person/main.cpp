#include <iostream>
#include<iomanip>
using namespace std;

class Person
{
protected:
    char fullName[30];
    char date[20];
    char homeTown[20];
public:
    void input();
    void output();
};


class KySu : public Person
{
private :
    char precialized[20];
    int namTN;
public:
    void input();
    void output();
    friend void tnMax(KySu *a,int n);
};

void KySu::input()
{
    cout<<"Enter ho ten : " ;fflush(stdin);gets(fullName);
    cout<<"Enter  ngay thang : " ;fflush(stdin);gets(date);
    cout<<"Enter homeTown : " ;fflush(stdin);gets(homeTown);
    cout<<"Enter Precialized : ";fflush(stdin);gets(precialized);
    cout<<"Enter namTN : " ;cin>>namTN;
}

void KySu::output()
{
    cout<<left<<setw(20)<<fullName<<setw(20)<<date<<setw(20)<<homeTown<<setw(20)<<precialized<<setw(20)<<namTN<<endl;
}

void tnMax(KySu *a,int n)
{
    int max1=a[0].namTN;
    for(int i=0;i<n;i++)
        if(max1<a[i].namTN)
            max1 = a[i].namTN;
    for(int i=0;i<n;i++)
        if(a[i].namTN == max1)
            a[i].output();
}

main()
{
    KySu *a;
    int n;
    cout<<"Nhap n: ";cin>>n;
    a = new KySu[n];
    for(int i=0;i<n;i++)
        a[i].input();

    cout<<left<<setw(20)<<"fullName"<<setw(20)<<"date"<<setw(20)<<"homeTown"<<setw(20)<<"precialized"<<setw(20)<<"namTN"<<endl;
    for(int i=0;i<n;i++)
        a[i].output();
    tnMax(a,n);
}
