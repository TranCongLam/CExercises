#include <stdio.h>

int main()
{
    /*
    // 1. Int type
    int a = 5; 
    
    printf("The value a is : %d\n", a);
    printf("The address a is &a : %p\n", &a); // & is taking the address of a
    printf("Size of a is : %zu bytes\n", sizeof(a));
    
    int * pointer_to_a = &a;
    
    printf("The value pointer_to_a is : %p\n", pointer_to_a); //The value of pointer_to_a is address of a
    printf("Size of pointer_to_a is : %zu bytes\n ", sizeof(pointer_to_a));
    printf("The value of a also is *pointer_to_a : %d\n", *pointer_to_a); // * is taking the value from the address
    
    //Change the value of a
    *pointer_to_a = 100;
    
    printf("The value a is: %d\n", a); //The value of a is changed
    printf("The address of a is &a: %p\n", &a); //The address is still the same
    printf("The value pointer_to_a is: %p\n", pointer_to_a); //The address is still the same
    printf("The value of a also is *pointer_to_a : %d\n", *pointer_to_a); //The value of pointer_to_a is changed

    // 2.Float type
    float b = 8.5;
    
    printf("The value b is : %d\n", b); // => Wrong result
    printf("The address a is &b : %p\n", &b); // & is taking the address of b
    printf("Size of b is : %zu bytes\n", sizeof(b));
    
    int * pointer_to_b = &b;
    
    printf("The value pointer_to_b is : %p\n", pointer_to_b); //The value of pointer_to_b is address of b
    printf("Size of pointer_to_b is : %zu bytes\n ", sizeof(pointer_to_b));
    printf("The value of b also is *pointer_to_b : %d\n", *pointer_to_b); // * is taking the value from the address but Wrong result
    
    //Change the value of b
    *pointer_to_b = 100.52;
    // After change the value of b:
    printf("The value b is: %d\n", b); // Result is 0 
    printf("The address of b is &b: %p\n", &b); //The address is still the same
    printf("The value pointer_to_b is: %p\n", pointer_to_b); //The address is still the same
    printf("The value of b also is *pointer_to_b: %d\n", *pointer_to_b); //The result is taking integer part*/

    // 3. Char type
    char * name= "TranCongLam";
    
    printf("The value of name is : %s\n", name);
    printf("The address of name is &name : %p\n", name);
    printf("Size of name is : %zu bytes\n", sizeof(name));
    printf("\n");
    int * pointer_to_name = name;
    
    printf("The value of pointer_to_name is : %p\n", pointer_to_name); 
    printf("Size of pointer_to_name is : %zu bytes\n", sizeof(pointer_to_name));
    printf("The value of name also is pointer_to_name : %s", pointer_to_name); 
    
    
    printf("\n");
    

    // 4. Array type
    /*int array[5] = {12, 13, 14, 15, 16};
    int * pointer_to_array;
    
    for (int i = 0; i < 5; i++){
        pointer_to_array = &array[i];
        printf("The value of %d element is %d and address is %p\n", i, *pointer_to_array, pointer_to_array);
    } */
     
    

    return 0;
}