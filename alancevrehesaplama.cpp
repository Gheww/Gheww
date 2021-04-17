#include <iostream>
using namespace std;

int main()
{
    double kisakenar,uzunkenar,alan,cevre,sonuc;
    cout<<"Kisa kenari girin :";
    cin >> kisakenar;
    cout<<"Uzun kenari giriniz :";
    cin >> uzunkenar;
    alan=kisakenar*uzunkenar;
    cevre= 2*(kisakenar+uzunkenar);

    cout<<"Alan :"<<alan<<endl<<"Cevre :"<<cevre<<endl;
    


    
    system("pause");
    return 0;
}
