#include <iostream>
#include <locale.h>
#include "Menu.h"
using namespace std;
int main()
{
    Menu m;
    setlocale(LC_CTYPE, "Spanish");
    m.menuPrincipal();
    return 0;
}
