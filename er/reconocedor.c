#include <stdio.h>
#include<ctype.h>

int verifica(char* s)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(!(s[i]=='+'|| s[i]=='-'|| isdigit(s[i])))
        return 0; //devuelve 0 si es ver
    }
    return 1;
}

int columna(int c)
{
    switch(c)
    {
        case '+':
            return 0;
        case '-':
            return 1;
        default:
            return 2;
    }
}
int esPalabra(const char* palabra)
{
    //para mantenerla en memoria (static)
    static int tt[4][3] = { {1,1,2},
                            {3,3,2},
                            {3,3,2},
                            {3,3,3}
                            };
    int e=0;
    int i=0;
    int c=palabra[0];

    while(c!='\0' && e!=3)
    {
        e=tt[e][columna(c)];
        i++;
        c=palabra[i];
    }
    if(e==2)
    {
        return 1;

    } else {
        return 0;
    }


}

int main()
{
    char palabra[]="-677";

    //si verificamos que los caracteres sean correctos
    if(!verifica(palabra))
    {
        printf("HAY CARACTERES QUE NO PERTENECEN AL ALFABETO");
        return 0;
    }

    if(esPalabra(palabra))
}