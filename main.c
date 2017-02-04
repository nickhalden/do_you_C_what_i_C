#include <stdio.h>
#include <limits.h>
#include <float.h>

struct Node{
    struct Node *next;
    int data;
};

struct Node node(int data){

    struct Node new_node;

    new_node.data=data;

    new_node.next= NULL;
    return new_node;

}



int main() {

    printFunctions();
    size_functions();





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


// hashmap in C


