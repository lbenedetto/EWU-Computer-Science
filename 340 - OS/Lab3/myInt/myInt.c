#include "myInt.h"
#include "../utils/fileUtils.h"
#include "stdlib.h"

/**
 * The buildInt method receives the input stream (in this case stdin)<br>
 * The method then:<br>
 * 1) Prompts the user to enter an integer<br>
 * 2) Reads that integer by using stream<br>
 * 3) Dynamically creates a 1 element structure using malloc/calloc<br>
 * 4) Stores the value previous entered inside the dynamically create<br>
 * 5) Returns the dynamically created structure<br>
 *
 * @warning Please ensure you leave the input buffer empty
 */
void *buildInt(FILE *stream) {
    MyInt *myInt = calloc(1, sizeof *myInt);
    printf("Enter an integer: ");
    char *temp = readLine(stream);
    sscanf(temp, "%d", &myInt->value);
    free(temp);
    return (void *) myInt;
}

/**
 * The printInt method completes the following:<br>
 * 1) Receives a void pointer which it casts to a MyInt *<br>
 * 2) Prints to the screen Int - and the value extracted from the cast MyInt *
 */
void printInt(void *ptr) {
    MyInt *myInt = (MyInt *) ptr;
    printf("%d", myInt->value);
}


/**
 * The cleanInt method completes the following:<br>
 * 1) Receives a void pointer which it casts to a MyInt *<br>
 * 2) Frees the cast MyInt *
 *
 * @warning All pointers need to be set to NULL after they are freed
 */
void cleanInt(void *ptr) {
    MyInt *myInt = (MyInt *) ptr;
    free(myInt);
    myInt = NULL;
}


/**
 * @brief Compares two objects of type MyInt.
 *
 * MyInts are compared based on value
 *
 * @note The passed in items will need to be cast to the appropriate MyInt type.
 *
 * @param p1 - The void * representing an object of type MyInt
 * @param p2 - The void * representing an object of type MyInt
 * @return int - Representing order < 0 indicates p1 is less than p2,
 * > 0 indicates p1 is greater than p2 and == 0 indicates p1 == p2 for contents
 *
 * @warning - The passed in void * p1 is checked - exit(-99) if NULL
 * @warning - The passed in void * p2 is checked - exit(-99) if NULL
 */
int compareInt(const void *p1, const void *p2) {
    if (p1 == NULL || p2 == NULL) exit(-99);
    MyInt *i1 = (MyInt *) p1;
    MyInt *i2 = (MyInt *) p2;
    return i1->value - i2->value;
}