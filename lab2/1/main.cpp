#include <stdio.h>

int main(){    
int a;
int b;
scanf("%d", &a);
scanf("%d", &b);
int res = 1;
for (int i = 0; i < b; i++ ){
    res*=a;
}
printf("%d", res);
}
