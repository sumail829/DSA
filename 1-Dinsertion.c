#include <stdio.h>

void insertat(int num, int pos, int len, int a[]);

int main() {
    int a[10] = {0};
    int len, pos, num;

    printf("Enter the length of an array: ");
    scanf("%d", &len);

    printf("Enter the array elements:\n");

    for (int i = 0; i < len; i++) {
        scanf("%d", &a[i]);
    }

    printf("Length = %d\n", len);

    printf("Enter the num and position to be inserted: ");
    scanf("%d%d", &num, &pos);

    pos--;  // convert position to array index

    printf("Array before insertion:\n");

    for (int i = 0; i < len; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    insertat(num, pos, len, a);

    return 0;
}

void insertat(int num, int pos, int len, int a[]) {

    if (pos < 0 || pos > len) {
        printf("Insertion outside the array\n");
        return;
    }

    for (int i = len; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = num;

    printf("Array after insertion:\n");

    for (int i = 0; i <= len; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}