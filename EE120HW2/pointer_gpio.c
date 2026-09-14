#include <stdio.h>
#include <stdint.h>

int main()
{
    volatile uint32_t GPIOA_ODR = 0x0000000;

    //Create a pointer to GPIOA_ODR
    volatile uint32_t* p = &GPIOA_ODR;

    // TODO 1:
    // Using pointer p, set bit 8 HIGH.

    *p |= (1<<8);

    printf("GPIOA_ODR after setting PA8 = 0x%08X\n",
            (unsigned int)GPIOA_ODR);

    // TODO 2:
    // Using pointer cdp, clear bit 8 back to LOW.
    *p &= ~(1<<8);

    printf("GPIOA_ODR after clearing PA8 = 0x%08X\n",
            (unsigned int)GPIOA_ODR);

    return 0;
}