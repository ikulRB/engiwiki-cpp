#include <stdio.h>

int main() {
    int number;
    int max_num, min_num;

    
    if (scanf("%d", &number) != 1 || number == 0) {
        return 0; 
    }

    
    max_num = number;
    min_num = number;

    
    while (scanf("%d", &number) == 1 && number != 0) {
        if (number > max_num) {
            max_num = number;
        }
        if (number < min_num) {
            min_num = number;
        }
    }

    
    printf("%d %d\n", max_num, min_num);

    return 0;
}
