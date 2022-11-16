#include <iostream>
using namespace std;

int main()
{
    int idade = 60;
    int x = 130;

    x = idade;

    idade = x;

    cout << "Valor de X: " << x << endl;

    cout << "Minha idade " << idade << endl;

    return 0;
}
//todods os valores será 60, pois x é igual a idade, ou seja x pega o valor de idade.