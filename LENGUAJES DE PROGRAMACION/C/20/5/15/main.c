#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct alumno{

    char *nomre2;
    int codigo;
    int nota;
};
int main()
{
    struct alumno e1,e2;
    e1.codigo=20172991;
    e1.nomre2="anderson";
    e1.nota=20;

    e2.codigo=201729912;
    e2.nomre2="ander";
    e2.nota=19;

    printf("%s\n",e1.nomre2);
    printf("%d\n",e1.codigo);
    printf("%d\n",e1.nota);

    printf("%s\n",e2.nomre2);
    printf("%d\n",e2.codigo);
    printf("%d\n",e2.nota);
    return 0;
}
