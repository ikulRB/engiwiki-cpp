#include <stdio.h>

int main() {
    int number;
    int max_num, min_num;
    int max_abs, min_abs;
    int current_abs;


    if (scanf("%d", &number) != 1 || number == 0) {
        return 0; 
    }

  
    max_num = number;
    min_num = number;
    

    max_abs = (number < 0) ? -number : number;
    min_abs = max_abs;


    while (scanf("%d", &number) == 1 && number != 0) {

        current_abs = (number < 0) ? -number : number;

        
        if (current_abs > max_abs) {
            max_abs = current_abs;
            max_num = number;
        }

        
        if (current_abs < min_abs) {
            min_abs = current_abs;
            min_num = number;
        }
    }

    
    printf("%d %d\n", max_num, min_num);

    return 0;
}
