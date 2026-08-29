#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **pp = &p;
    int ***ppp = &pp;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);

    printf("\nValue using p = %d\n", *p);
    printf("Address stored in p = %p\n", p);
    printf("Address of p = %p\n", &p);

    printf("\nValue using pp = %d\n", **pp);
    printf("Address stored in pp = %p\n", pp);
    printf("Address of pp = %p\n", &pp);

    printf("\nValue using ppp = %d\n", ***ppp);
    printf("Address stored in ppp = %p\n", ppp);

    (*p)++;
    printf("\nAfter (*p)++ = %d\n", a);

    **pp = 50;
    printf("After **pp = 50 = %d\n", a);

    ***ppp = 100;
    printf("After ***ppp = 100 = %d\n", a);

    return 0;
}