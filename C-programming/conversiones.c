#include <stdio.h>

int main()
{
    float x;
    int i;
    char c='a';

    i=c;
    printf("%d %c\n",i,i);
    c=i;
    printf("%d %c\n\n",c,c);

    x=i+2.5;
    printf("%d + 2.5 = %f\n\n",i,x);

    x=3.14;
    i=x;
    printf("x=%f  i=%d\n\n",x,i);

    x=(float)i+2;
    printf("%d + 2 = %f\n\n",i,x);
    printf("%d %f\n",i,(float)i);

    printf("%d %f\n",i/2,(float)i/2);
    return 0;
}
