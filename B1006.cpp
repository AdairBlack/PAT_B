#include <cstdio>

int main(){
    int num;
    scanf("%d", &num);
    int x = 0, y = 0, z = 0;
    x = num / 100;
    y = num % 100 / 10;
    z = num % 10;
    for(int i = 0; i < x; i++){
        printf("B");
    }
    for(int i = 0; i < y; i++){
        printf("S");
    }
    for(int i = 1; i <= z; i++){
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
