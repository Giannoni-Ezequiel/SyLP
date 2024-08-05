/*#include <stdio.h>
int main(){}     */             

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertir_mayus_a_minus(char *cadena) {
    while (*cadena) {
        *cadena = tolower(*cadena);
        cadena++;
    }
}