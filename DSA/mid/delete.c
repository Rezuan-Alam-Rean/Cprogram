#include <stdio.h>
int main () {
    int arrays[] = {1, 2, 3, 4, 5};

    int pos = 2;

    for (int i = pos; i < 5 - 1; i++) {
        arrays[i] = arrays[i + 1];
    }

    printf ("The elements  after deleting : ");
    for (int i = 0; i < 5 - 1; i++) {
        printf ("%d ", arrays[i]);
    }
    return 0;
}

