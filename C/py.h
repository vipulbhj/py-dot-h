/**
 * Conditional macros.
*/
#define and &&
#define or ||

/** 
 * Print logic macros.
*/
#define printf_dec_format(x) _Generic((x), \
    char: "%c", \
    signed char: "%hhd", \
    unsigned char: "%hhu", \
    signed short: "%hd", \
    unsigned short: "%hu", \
    signed int: "%d", \
    unsigned int: "%u", \
    long int: "%ld", \
    unsigned long int: "%lu", \
    long long int: "%lld", \
    unsigned long long int: "%llu", \
    float: "%f", \
    double: "%f", \
    long double: "%Lf", \
    char *: "%s", \
    void *: "%p")
 
#define print(x) printf(printf_dec_format(x), x)
#define println(x) printf(printf_dec_format(x), x) , printf("\n");

/**
 * len logic added.
*/
#define len(a) sizeof(a)/sizeof(a[0])