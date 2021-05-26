#include <cstdlib>
#include <iostream>

using namespace std;

/*Calcular Ricci Recursivo - termo da posi��o*/
int ricci(int, int, int);

int main()
{

  int n1, n2, termo;
  cout << "Sequencia Ricci Recursivo"
       << "\n\n"
       << "Definida por P(n)=P(n-1)+P(n-2) "
       << "\n\n";
  cout << "Digite o primeiro termo: ";
  cin >> n1;
  cout << "Digite o segundo termo: ";
  cin >> n2;
  cout << "\n"
       << "Digite posicao desejada: ";
  cin >> termo;
  cout << "\n"
       << n1 << ", ";
  termo = ricci(termo, n1, n2);

  cout << "\n\n";

  return EXIT_SUCCESS;
}

int ricci(int termo, int n1, int n2)
{
  cout << n2 << ", ";
  if (termo == 1)
  {
    return 1;
  }
  else
  {
    ricci(termo - 1, n2, n1 + n2);
  }
}
