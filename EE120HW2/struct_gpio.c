#include <stdio.h>
#include <stdint.h>

typedef struct 
{
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
    
} GPIO_TypeDef;

int main()
{
    GPIO_TypeDef GPIOA_registers = { 0 , 0 };

    GPIO_TypeDef* GPIOA = &GPIOA_registers;

    // TODO 1:
    // Using GPIOA->ODR, set PA3 HIGH.
    GPIOA->ODR |= (1<<3); 

    // TODO 2:
    // Using GPIOA->ODR, set PA8 high.
    GPIOA->ODR |= (1<<8);

    printf("ODR after setting PA3 and PA8 = 0x%08X\n",
        (unsigned int)GPIOA->ODR);

    // TODO 3:
    // Use BSRR to represent setting PA5 HIGH.
    // Then update the simulated ODR to show the result.
    GPIOA->BSRR |= (1<<5);
    GPIOA->ODR |= (1<<5);

    printf("ODR after setting PA5 = 0x%08X\n",
        (unsigned int)GPIOA->ODR);

    return 0;
}
