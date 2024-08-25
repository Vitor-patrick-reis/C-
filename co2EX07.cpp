// co2EX07.cpp

#include <iostream>

using namespace std;

int main (void)
{
 int a, b, r;

 cout << "Informe valor para a variavel <a>: "; cin >> a;
 cin.ignore(80, '\n');

 cout << "Informe valor para a variavel <b>: "; cin >> b;
 cin.ignore(80, '\n');

 r= a + b;

 cout << "Resultado = " << r << endl;
 cout << endl;

 cout << "Tecle <enter> para encerrar...";
 cin.get();
 return 0;

}
