#include <stdio.h>
#include <stdint.h>

int main()
{
    volatile uint32_t GPIOA_ODR = 0x00000000;

    //Create a pointer to GPIOA_ODR
    volatile uint32_t* p = &GPIOA_ODR;

    // TODO 1:
    // Using pointer p, set bit 8 HIGH.

    printf("GPIOA_ODR after setting PA8 = 0x%08X\n",
            (unsigned int)GPIO_ODR);

    // TODO 2:
    // Using pointer p, clear bit 8 back to LOW.

    printf("GPIOA_ODR after clearing PA8 = 0x%08X\n",
            (unsigned int)GPIOA_ODR);

    return 0;
}