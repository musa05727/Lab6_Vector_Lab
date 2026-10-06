/***************
 * Filename: vecttop.c 
 * Author: Musa Abdul Hamid 
 * Description: Vector calculator that supports three operations: add, sub, and scalar mult. 
 * Note: gcc vectcalc. vecttop.c -o vectcalc.c 
 **************/
#include "vect.h"
#include <stdbool.h>
#define array_length 10

//static vect vector_array[10];

int vect_index = 0;

vect add(vect a, vect b){
    vect return_vector; 
    return_vector.x = a.x + b.x;
    return_vector.y = a.y + b.y; 
    return_vector.z = a.z + b.z; 

    return return_vector; 
}

vect sub(vect a, vect b){
    vect return_vector; 
    return_vector.x = a.x - b.x;
    return_vector.y = a.y - b.y; 
    return_vector.z = a.z - b.z; 

    return return_vector; 
}

vect smult(vect a, double scalar){
    vect return_vector; 
    return_vector.x = a.x * scalar; 
    return_vector.y = a.y * scalar; 
    return_vector.z = a.z * scalar; 

    return return_vector; 
}




