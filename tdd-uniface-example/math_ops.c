#include "h3gl_mock.h"
/* Função exportada para o Uniface */

EXPORT void ADD_INTS(long *n1, long *n2, long *res)
{
    if (n1 && n2 && res)
    {
        *res = (*n1) + (*n2);
    }
}

/*recebe 2 números
soma
retorna resultado
*/