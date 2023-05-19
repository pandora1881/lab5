#include <stdio.h>

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    
    int array[n];
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    int positiveCount = 0;
    int product = 1;
    int minIndex = 0;
    
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            positiveCount++;
        }
        
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
        
        if (i < minIndex) {
            product *= array[i];
        }
    }
    
    printf("Кількість додатних елементів масиву: %d\n", positiveCount);
    printf("Добуток елементів масиву, розташованих до мінімального за модулем елемента: %d\n", product);
    
    return 0;
}
