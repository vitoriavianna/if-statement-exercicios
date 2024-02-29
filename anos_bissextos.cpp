#include <iostream>

using namespace std;

int main ()
{
    int iAno;

    cout << "Digite o ano: " << endl;
    cin >> iAno;

    if (iAno % 4 == 0)
    {
        if (iAno % 100 != 0)
        cout << "O ano " << iAno << "é bissexto." << endl;
    }
    else if (iAno % 400 == 0)
    {
        cout << "O ano " << iAno << "é bissexto." << endl;
    }
    else cout << "O ano" << iAno << "não é bissexto" << endl;
    
    return 0;
}