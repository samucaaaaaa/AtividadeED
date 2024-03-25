#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

float progressaoAritmetica(float);
int iNumeroDeDigitos(int);
void abs(float&);
int iFibonacciN(int);

int main()
{
    return 0;
}

void abs(float& fValor)
{
    if (fValor < 0)
    {
        fValor = -fValor;
    }
}

int iFibonacciN(int N)
{
    int iF1 = 1;
    int iF2 = 1;
    int iContador = 0;
    while (iContador < (N-2))
    {
        int auxiliar = iF1;
        iF1 = iF2;
        iF2 = iF2 + auxiliar;
        iContador += 1;
    }

    return iF2;
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
