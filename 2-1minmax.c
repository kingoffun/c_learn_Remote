#include <stdio.h>
#include <limits.h>

// char short int long

int main()
{
    printf("signed char MAX - %d\n", SCHAR_MAX);
    printf("signed char MIN - %d\n", SCHAR_MIN);
    printf("signed short MAX - %d\n", SHRT_MAX);
    printf("signed short MIN - %d\n", SHRT_MIN);
    printf("signed int MAX - %d\n", INT_MAX);
    printf("signed int MIN - %d\n", INT_MIN);
    printf("signed long MAX - %ld\n", LONG_MAX);
    printf("signed long MIN - %ld\n", LONG_MIN);

    printf("unsigned char MAX - %d\n", UCHAR_MAX);
    printf("usigned short MAX - %d\n", USHRT_MAX);
    printf("usigned int MAX - %u\n", UINT_MAX);
    printf("usigned long MAX - %lu\n", ULONG_MAX);

    return 0;
}