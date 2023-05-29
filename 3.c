#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int arr[n];
    int i;
    
    // Заповнення масиву випадковими числами
    srand(time(0));
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 201 - 100;  // Генеруємо числа в діапазоні [-100, 100]
    }

    // Виведення масиву
    printf("Масив: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Знаходження кількості додатних елементів масиву
    int count_positive = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count_positive++;
        }
    }
    printf("Кількість додатних елементів масиву: %d\n", count_positive);

    // Знаходження добутку елементів масиву, розташованих до мінімального за модулем елемента
    int min_abs_index = 0;
    for (i = 1; i < n; i++) {
        if (abs(arr[i]) < abs(arr[min_abs_index])) {
            min_abs_index = i;
        }
    }
    int product = 1;
    for (i = 0; i < min_abs_index; i++) {
        product *= arr[i];
    }
    printf("Добуток елементів масиву до мінімального за модулем елемента: %d\n", product);

    return 0;
}
