#include <iostream>
using namespace std;
int main()
{
    int sayi;
        cout << "Sayi giriniz\n";
        cin >> sayi;
    if (sayi>10)
        sayi=sayi-10;
    else
        sayi=sayi+10;
        cout << "Sayi:\n" << sayi;

    return 0;


}
