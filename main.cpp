#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

float progressaoAritmetica(float);
int iNumeroDeDigitos(int);
void abs(float&);

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
