#include <stdio.h>

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int a[n];
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            positiveCount++;
        } else if (a[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    if (negativeCount <= positiveCount) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    if (zeroCount > 0) {
        printf("Нулі знаходяться на наступних позиціях: ");
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                printf("%d ", i + 1);
            }
        }
        printf("\n");
    }

    return 0;
}
