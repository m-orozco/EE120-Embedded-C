/* calling a Swap from main() */
int x = 42, y = 17;
Swap(&x, &y);

/* correct version of Swap */
void Swap(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;

    printf("Inside Swap: x = %d, y = %d\n", *px, *py);
}
