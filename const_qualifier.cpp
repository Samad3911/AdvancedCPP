#include <iostream>

int main(){
    int x =5;
    const int MAX = 12;
    int &ref_x1 = x;
    const int &ref_x2 = x;
    ref_x1 = 13;
    //ref_x2 = 23;       // cannot modify const references

    const int* ptr1 = &x;
    int* const ptr2 = &x;
    const int* const ptr3 = &x;

    //*ptr1 = 28;              // cannot change the value of ptr as it holds const data
    int y = 20;
    ptr1 = &y;                 //can change the address that ptr holds as it is a non-const pointer

    *ptr2 = 30;                 //can change the value of ptr as it holds non const data
    //ptr2 = &y;                 // cannot change the address that ptr holds as it is const pointer

     //*ptr3 = 45;
     //ptr3 = &y;               // cannot change value or address that ptr3 holds as it is a const pointer that holds const data 
    return 0;
}