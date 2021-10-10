#include <stdio.h>
    
int examplePointer()
{   
    
    // ? -> address , value = ?, data-type = ?

    int num = 12; 
    // num -> address = 0x1, value = 12, data-type = int          | New
    
    int *ptr = &num;
    // ptr -> address = 0x2, value = 0x1, data-type = int *       | New
    // num -> address = 0x1, value = 12, data-type = int          | Same as above
    
    int numCopy = *ptr;
    // numCopy -> address = 0x3, value = 12, data-type = int      | New (get value of ptr'value)
    // ptr -> address = 0x2, value = 0x1, data-tyoe = int *       | Same as above
    // num -> address = 0x1, value = 12, data-type = int          | Same as above
    
    num = 15;
    // num -> address = 0x1, value = 15, data-type = int          | Change value
    // numCopy -> address = 0x3, value = 12, date-type = int      | Same as above
    // ptr -> address = 0x2, value = 0x1, data-tyoe = int *       | Same as above
    
    *ptr = 10;
    // ptr -> address = 0x2, value = 0x1, data-type = int *       | Same as above
    // num -> address = 0x1, value = 10, data-type = int          | Change value
    // numCopy -> address = 0x3, value = 12, date-type = int      | Same as above
    
    ptr = &numCopy;
    // ptr -> address = 0x2, value = 0x3, data-type = int *       | Change value
    // num -> address = 0x1, value = 10, data-type = int          | Same as above
    // numCopy -> address = 0x3, value = 12, date-type = int      | Same as above
    
    num = *ptr;
    // ptr -> address = 0x2, value = 0x3, data-type = int *       | Same as above
    // num -> address = 0x1, value = 12, data-type = int          | Change value (get value of ptr'value)
    // numCopy -> address = 0x3, value = 12, date-type = int      | Same as above
    
    int *ptrCopy = &num;
    // ptrCopy -> address = 0x4, value = 0x1, data-type = int *   | New
    // ptr -> address = 0x2, value = 0x3, data-type = int *       | Same as above
    // num -> address = 0x1, value = 12, data-type = int          | Same as above
    // numCopy -> address = 0x3, value = 12, date-type = int      | Same as above
    
    int **ptr2 = &ptr;    
    //ptr2 -> address = 0x5, value = 0x2, data-type = int *       | New
    // ptrCopy -> address = 0x4, value = 0x1, data-type = int *   | Same as above
    // ptr -> address = 0x2, value = 0x3, data-type = int *       | Same as above
    // num -> address = 0x1, value = 12, data-type = int          | Same as above
    // numCopy -> address = 0x3, value = 12, date-type = int      | Same as above
    
    int *num2 = *ptr2;
    // num2 -> address = 0x6, value = 0x3, data-type = int *      | New (get value of ptr2'value)
    //ptr2 -> address = 0x5, value = 0x2, data-type = int *       | Same as above
    // ptrCopy -> address = 0x4, value = 0x1, data-type = int *   | Same as above
    // ptr -> address = 0x2, value = 0x3, data-type = int *       | Same as above
    // num -> address = 0x1, value = 12, data-type = int          | Same as above
    // numCopy -> address = 0x3, value = 12, date-type = int      | Same as above
    
    int num3 = **ptr2;
    // num3 -> address = 0x7, value = 12, data-type = int         | New
    // num2 -> address = 0x6, value = 0x3, data-type = int *      | Same as above
    // ptr2 -> address = 0x5, value = 0x2, data-type = int *      | Same as above
    // ptrCopy -> address = 0x4, value = 0x1, data-type = int *   | Same as above
    // ptr -> address = 0x2, value = 0x3, data-type = int *       | Same as above
    // num -> address = 0x1, value = 12, data-type = int          | Same as above
    // numCopy -> address = 0x3, value = 12, date-type = int      | Same as above
    
    printf("%p %p %p\n", num2, ptr, &numCopy); // True result
    printf("%d %d %d", num3, num, numCopy);  //True result
}

int main()
{
    examplePointer();
    return 0;
}
