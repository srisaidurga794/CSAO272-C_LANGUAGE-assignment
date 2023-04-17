#include <stdio.h>

void roll (int *a1, int n, int *a2)
{
    int tmp = *a1;          

    *a2++ = *(a1++ + --n);  
    while (--n)             
        *a2++ = *a1++;      
    *a2 = tmp;              
}

int main(void)
{
    int i, x;

    printf ("Enter the length of the array: ");
    if (scanf("%d", &x) != 1) {
        fprintf (stderr, "error: invalid input.\n");
        return 1;
    }
    int a[x], b[x], *p = b;

    printf ("Enter the elements\n");
    for (i = 0; i < x; i++) {
        printf ("  a[%2d]: ", i);
        if (scanf ("%d", &a[i]) != 1) {
            fprintf (stderr, "error: invalid input.\n");
            return 1;
        }
        b[i] = a[i];   
    }

    roll (a, x, b);

    printf("The output array is:");
    while (x--)
        printf (" %2d", *p++);
    putchar ('\n');

    return 0;
}
