#include <iostream>
using namespace std;

int main(void)
{
  int NUMERO;

  cout << "Entre um valor: "; cin >> NUMERO;
  cin.ignore(80, '\n');
  cout << "\n";

  if (NUMERO >= 20 and NUMERO <= 90)
    cout << "O valor esta entre 20 e 90.";
  else
    cout << "O valor nao esta entre 20 e 90.";

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
