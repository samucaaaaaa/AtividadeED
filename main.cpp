#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

float progressaoAritmetica(float);

int main()
{
    return 0;
}

float progressaoAritmetica(float fRazao, float fInicial, int iTermo)
{
    return fInicial + (iTermo - 1)*fRazao;
}
