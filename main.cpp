#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

float progressaoAritmetica(float);
int iNumeroDeDigitos(int);

int main()
{
    return 0;
}

float progressaoAritmetica(float fRazao, float fInicial, int iTermo)
{
    return fInicial + (iTermo - 1)*fRazao;
}

int iNumeroDeDigitos(int iValor)
{
   if (iValor/10 >= 1)
   {
        return 1 + iNumeroDeDigitos(iValor/10);
   }
   else
   {
        return 1;
   }
}  
