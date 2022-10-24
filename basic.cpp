#include <iostream>
using namespace std;
int main()
{
    int i;
    cout <<"enter amount to be withdrawn.";
    cin >> i;
    cout <<i/100 << "hundred rupee notes \n" ;
    cout << (i%100)/50<< "fiftyrupee  notes\n";
    cout << ((i%100)%50)/10 << "tenrupee  notes\n";
    return 0;
}
