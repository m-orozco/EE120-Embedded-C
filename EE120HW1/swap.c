/* calling a Swap from main()
int x = 42, y = 17;
Swap(&x, &y); */

#include <stdio.h> // header file for printf

/* correct version of Swap, uses pointers to int, 
holds addresses of x and y */
void Swap(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;

    // Debugging output to show the values inside the Swap function
    printf("Inside Swap: x = %d, y = %d\n", *px, *py);
}

/* Swap with three variables
    x to y, y to z*/
void SwapXYZ(int *px, int *py, int *pz)
{
    int tempx;
    tempx = *px; //original x value
    int tempy;
    tempy = *py; //original z value
    *px = *pz;
    *py = tempx;
    *pz = tempy;
    printf("Inside SwapXYZ: x = %d, y = %d, z = %d\n", *px, *py, *pz);

}

int main(void)
{
    /* Part a: Swap function with x=42 and y=17, output should 
        be x = 17, y = 42 */
    int x = 42, y = 17;
    printf("\nHomework 1: Pointer-Based Swap Function\n### Part a: x,y ###\n");
    printf("Before Swap: x = %d, y = %d\n", x, y);
    Swap(&x, &y); // Call Swap passing addresses(&) of x and y
    printf("After Swap: x = %d, y = %d\n", x, y);

    /* Part b: Swap function with x = 10, y = 21, and z = 32
        should return x = 32, y = 10, and z = 21. */
    int x2 = 10, y2 = 21, z = 32;
    printf("\n### Part b: x = 10, y = 21, z = 32 ###\n"); 
    printf("should return x = 32, y = 10, and z =32\n");
    printf("Before Swap: x = %d, y = %d, z = %d\n", x2, y2, z);
    SwapXYZ(&x2, &y2, &z);
    printf("After Swap: x = %d, y = %d, z = %d\n", x2, y2, z);

    return 0;
}