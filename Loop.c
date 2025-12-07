#include <stdio.h>

int main() {
    int arr[8];
    int i = 0;
    int x;

    while (i < 8) {
        scanf("%d", &x);

        if (x < 100 || x > 999) {
            printf("Invalid Code\n");
            continue;
        }

        arr[i] = x;
        i++;
    }
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

