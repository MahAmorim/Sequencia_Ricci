#include <cstdlib>
#include <iostream>

using namespace std;

/*Calcular Ricci Recursivo - termo da posi��o*/
int ricci(int, int, int);

int main()
{

  int n1 = 0, n2 = 0, termo = 0;
  cout << "Sequencia Ricci Recursivo"
       << "\n\n"
       << "Definida por R(n)=R(n-2)+R(n-1) "
       << "\n\n";
  cout << "Digite o primeiro termo: "
       << "\n";
  cin >> n1;
  cout << "Digite o segundo termo: "
       << "\n";
  cin >> n2;
  cout << "\n"
       << "Digite posicao desejada: "
       << "\n";
  cin >> termo;

  cout << "\n"
       << "O Termo presente na posicao pedida \x82: " << ricci(n1, n2, termo) << "\n\n";

  system("PAUSE");
  return 0;
}

int ricci(int n1, int n2, int termo)
{
  if (termo <= 2)
  {
    if (termo == 2)
    {
      return (n2);
    }
    else
    {
      return (n1);
    }
  }
  else
  {
    return (ricci(n1, n2, termo - 2) + ricci(n1, n2, termo - 1));
  }
}
