#include <iostream>
using namespace std;

int main()
{
    int sayi1,sayi2,sayi3,sonuc;
    cout<<"Ortalamasini bulmak istediginiz 3 Adet sayiyi giriniz=";  
    cin >> sayi1;
    cout<<""<<endl;
    cin>> sayi2;
    cout<<""<<endl;
    cin>>sayi3;

    sonuc= (sayi1+sayi2+sayi3)/3;

    cout<<"Sonuc="<<sonuc;
    
    system("pause");
    return 0;
}
