//Question 10
__asm int sum4(int a, int b, int c, int d)
    {
        //arguments stored in r0, r1, r2, r3
        ADD r0, r0, r1           //r0 = a + b
        ADD r0, r0, r2           // r0 = a + b + c
        ADD r0, r0, r3           // r0 = a + b + c + d
        BX lr                    // return, result in r0
     }

//Question 11
int sum4(int a, int b, int c, int d) {
    int t;
    __asm {
        ADD t, a, b
        ADD t, c
        ADD t, d
    }
    return t;
}

//Question  12
//main.c
extern void strcpy(char *dst, char *src);   // ← fix 1: prototype

char src[9] = "Hello!";
char dst[9];

int main(void) {
    strcpy(dst, src);
    while(1);
}