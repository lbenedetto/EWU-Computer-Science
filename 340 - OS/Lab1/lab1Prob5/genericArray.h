/**
 * @file genericArray.h
 * A Generic Array file for holding a basic structure and the method headers that are written in a very
 * generic fashion
 */
#ifndef GENERICARRAY_H
#define GENERICARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * The name generic array structure that simply holds a void pointer<br>
 */
struct generic_array
{
	/**
	 * The void pointer for the data
	 */
	void * data;
};


/**
 * My style is to create a generic named structure and then typedef to a more usable name
 */
typedef struct generic_array GenericArray;


/**
 * The fillArray method.  The point of this method is to:<br>
 * 1) Ask the user to enter an int &gt; 0<br>
 * 2) Ensure the number entered is greater than 0<br>
 * 3) Create a GenericArray via malloc/calloc<br>
 * 4) Fill the array with values by calling buildType which refers to a specific type as a function pointer<br>
 *
 * @param function pointer for building the type
 * @param in Representing the input stream in this case stdin
 * @param length A pointer back to main for the length of the array
 * @return GenericArray * Representing the filled array
 */
GenericArray * fillArray(void * (*buildType)(FILE * input), FILE * in, int * length);


/**
 * The printArray method.  The point of this method is to:<br>
 * The method loops thru each element of the array and simply calls the appropriate print method and prints the contents to the stream
 *
 * @param array Representing the GenericArray as a 1D pointer
 * @param length A pointer back to main for the length of the array
 * @param function pointer for print the contents of the void pointer -- note the function pointer is passed the void * data
 */
void printArray(GenericArray * array, int length, void (*printType)(void *));


/**
 * The cleanArray method.  The point of this method is to:<br>
 * The method loops thru each element of the array and simply calls the appropriate clean method and frees any dynamically allocated memory<br>
 * Each element of the appropriate type should be set to NULL if it is a pointer<br>
 * Once the for loop completes the array itself is freed.
 *
 * @param array Representing the GenericArray as a 1D pointer
 * @param length A pointer back to main for the length of the array
 * @param function pointer for cleaning the contents of the void pointer -- note the function pointer is passed the void * data
 */
void cleanArray(GenericArray * array, int length, void (*cleanType)(void *));


#endif
