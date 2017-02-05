#include <stdio.h>
#include <float.h>
#include "file.c"
static int count=6;

int main() {

    printFunctions();
    size_functions();
    declarations();
    storageClasses();
    write_extern();
    int a=10,b=20;
    pass_by_value(a, b);
    printf("Value of a: %ld\n",a); // did not do anything

    pass_by_reference(&a);
    printf("Value of a: %ld\n",a);
    pointer_example();

    return 0;
}

int printFunctions(){
    printf("Hello, World!\n");
    printf("Hello Bhalla");

}

int size_functions(){

    // size of elements
    printf("Storage size for int : %lu \n", sizeof(int));
    printf("Storage size for float : %d \n", sizeof(float));

    // minimum and maximum elements elements
    printf("Minimum float positive value: %E\n", FLT_MIN );
    printf("Maximum float positive value: %E\n", FLT_MAX );
    printf("Precision value: %d\n", FLT_DIG );
}
int types(){
    int    i, j, k;
    char   c, ch;
    float  f, salary;
    double d;
}

int declarations(){
//    extern int d = 3, f = 5;    // declaration of d and f.
    int d = 3, f = 5;           // definition and initializing d and f.
//    byte z = 22;                // definition and initializes z.
    char x = 'x';               // the variable x has the value 'x'.

    /* variable definition: */
    int a, b;
    int c;
    f;

    /* actual initialization */
    a = 10;
    b = 20;

    c = a + b;
    printf("value of c : %d \n", c);

//    f = 70.0/3.0;
//    printf("value of f : %f \n", f);

}

int storageClasses(){
        // A storage class defines the scope (visibility) and life-time of variables and/or functions within a C Program.
        // They precede the type that they modify. We have four different storage classes in a C program −


        //auto
        //The auto storage class is the default storage class for all local variables.
        int mount;
        auto int month;

        printf("value of by default int (auto) %d\n", sizeof(mount));
        printf("value of auto %d\n", sizeof(month));

        /*
         * The register storage class is used to define local variables that should be stored in a register instead of RAM.
         * This means that the variable has a maximum size equal to the register size (usually one word) and
         * can't have the unary '&' operator applied to it (as it does not have a memory location).
         * require quick access such as counters.
         */

        register int  miles;
        printf("value of register variable %d\n", sizeof(miles));


    /*
     * The static modifier may also be applied to global variables.
     * When this is done, it causes that variable's scope to be restricted to the file in which it is declared.
     * The static modifier may also be applied to global variables. When this is done, it causes that variable's
     * scope to be restricted to the file in which it is declared.
     * In C programming, when static is used on a class data member,
     * it causes only one copy of that member to be shared by all the objects of its class.
     */
    while(count--) {
        func();
    }



};

int func(){
    static  int i=9;
    printf("count =%d, i=%d\n",count,i);
    i--;
}

