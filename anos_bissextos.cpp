// código para e identificar se um ano é bissexto ou não.

#include <iostream>

using namespace std;

int main ()
{
    int iAno;

    cout << "Digite o ano: " << endl;
    cin >> iAno; //usuário insere o ano que quer descobrir se é bissexto ou não

    if (iAno % 4 == 0) //se for divisível por 4
    {
        if (iAno % 100 != 0) //se não for divisível por 100
        cout << "O ano " << iAno << "é bissexto." << endl;
    }
    else if (iAno % 400 == 0) //se for divisível por 400
    {
        cout << "O ano " << iAno << "é bissexto." << endl;
    }
    else //se não cumprir nenhuma das condições anteriores
    {
        cout << "O ano" << iAno << "não é bissexto" << endl;
    }
    
    return 0;
}
