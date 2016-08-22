#include "class.h"

/*static*/ void printClass(Class * class){
    printf("%d\n", class->data);
}

Class newClass(int data){
    Class newClass;
    newClass.data = data;
    newClass.printClass = &printClass;
    newClass.freeClass = &freeClass;
    
    return newClass;
}

void freeClass(Class * class){
    free(class);
    class->data = 0;
    class->printClass = NULL;
    class->freeClass = NULL;
}