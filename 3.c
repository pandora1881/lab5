#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    
    int arr[n];
    int i, positive_count = 0, product = 1;
    int min_index = 0, min_value = 0;
    
    // Ввід елементів масиву
    printf("Введіть елементи масиву:\n");
    for (i = 0; i < n; i++) {
        printf("Елемент %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Пошук кількості додатних елементів масиву
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        }
    }
    
    // Пошук мінімального за модулем елемента та обчислення добутку перед ним
    for (i = 0; i < n; i++) {
        if (abs(arr[i]) < abs(arr[min_index])) {
            min_index = i;
        }
        
        if (i < min_index) {
            product *= arr[i];
        }
    }
    
    printf("Кількість додатних елементів масиву: %d\n", positive_count);
    printf("Добуток елементів масиву, розташованих до мінімального за модулем елемента: %d\n", product);
    
    return 0;
}
