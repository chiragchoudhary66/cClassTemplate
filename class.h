#ifndef class_h
#define class_h

#include <stdio.h>
#include <stdlib.h>

typedef struct classDef {
    
    // Members
    int data;
    
    // Functions
    void (*printClass)(struct classDef *);
    void (*freeClass)(struct classDef *);
    
} Class;


Class newClass(int data);
void freeClass(Class * class);
/*static*/ void printClass(Class * class);

#endif