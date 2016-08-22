#include <stdio.h>
#include "class.h"


int main() {
    
    Class class = newClass(5);  // CLASS LIKE INITIALIZER
    

    class.printClass(&class);   // OK - ENCAPSULATED
    printClass(&class);         // WRONG - Function from other classes may create confilicts
                                // And no clear indication of the function belongs to.
    
    // Remove the comments around static in class.c and class.h file
    
    return 0;
}


