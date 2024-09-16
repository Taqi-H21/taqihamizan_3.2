#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Masukan tiga angka!"<<endl;
cout<<"angka pertama: ";
cin>>a;
cout<<"angka kedua: ";
cin>>c;
cout<<"angka ketiga: ";
cin>>b;

if(c>a)
{
    cout<<"Angka terbesar ialah angka kedua"<<endl;
}
else if(a>b)
{
    cout<<"Angka terbesar ialah angka pertama"<<endl;
}
else if(b>c)
{
    cout<<"Angka terbesar ialah angka ketiga"<<endl;
}
else if(c>b)
{
    cout<<"Angka terbesar ialah angka kedua"<<endl;
}
else if(b>a)
{
    cout<<"Angka terbesar ialah angka ketiga"<<endl;
}
else if(a>c)
{
    cout<<"Angka terbesar ialah angka pertama"<<endl;
}
else
{
    cout<<"-"<<endl;
}
return 0;
}
