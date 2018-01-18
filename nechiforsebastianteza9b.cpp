#include <iostream>
using namespace std;
int n, nr;
int main()
{
    cout << " introduceti numarul dorit = "; cin >> n;
    if(n==0) nr=1;
    else{ while (n) {nr++; n=n/10;} }
    cout<<" Numarul introdus de dumneavoastra are " << nr << " cifre.";
return 0;
}
