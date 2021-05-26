#include <cstdlib>
#include <iostream>

using namespace std;

//RICCI SEM RECURSIVIDADE

int main()
{

  int n1 = 0, n2 = 0, n3 = 0, termo = 0, termoCalculado = 2, soma = 0;

  cout << "S\x82rie Ricci:"
       << "\n\n";
  cout << "Digite o primeiro termo: "
       << "\n";
  cin >> n1;
  cout << "Digite o segundo termo: "
       << "\n";
  cin >> n2;

  cout << "Qual o numero de termos desejados? "
       << "\n";
  cin >> termo;

  while (termo <= 3)
  {
    cout << "Numero de termos desejado deve ser maior que 3: ";
    cin >> termo;
  }

  soma == n1 + n2;
  cout << "\n"
       << "Termo 1: " << n1 << "\n";
  cout << "\n"
       << "Termo 2: " << n2 << "\n";
  termoCalculado == 2;

  while (termoCalculado < termo)
  {
    termoCalculado = termoCalculado + 1,
    n3 = n1 + n2;

    cout << "\n"
         << "Termo " << termoCalculado << ": " << n3 << "\n";
    soma = soma + n3;
    n1 = n2;
    n2 = n3;
  }

  cout << "Soma dos termos: " << soma;

  return EXIT_SUCCESS;
}
