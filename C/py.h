/**
 * Conditional macros.
*/
#define and &&
#define or ||

/**
 * len logic added.
*/
#define len(a) sizeof(a)/sizeof(a[0])


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
 * Logic to print 1 Dimnesional array.
*/
#define aPrint(x) _Generic((x[0]), \
    int: aIntPrint((int *)&x,len(x)), \
    float: aFloatPrint((float *)&x,len(x)))


// Print function for array.
// Support function for array print generic.
// Support for integer and float types array.
void aIntPrint(int *a, int size) {
	printf("###########START#################\n");
    for(int i=0;i<size;i++) {
        printf("%d\n",a[i]);
    }
	printf("###########END###########\n");
}

void aFloatPrint(float *a, int size) {
	printf("###########START#################\n");
    for(int i=0;i<size;i++) {
        printf("%f\n",a[i]);
    }
	printf("###########END###########\n");
}

