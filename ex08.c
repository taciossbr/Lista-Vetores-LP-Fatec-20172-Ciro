#include <stdio.h>

int main(){

    int v[20], i;
    for(i = 0; i < 20; i++){
        scanf(" %d", &v[i]);
    }
    int j = 19, aux;
    for(i = 0; i < j; i++){
        aux = v[i];
        v[i] = v[j];
        v[j--] = aux;
    }
    for(i = 0; i < 20; i++){
        printf("%d, ", v[i]);
    }
    putchar('\n');
    
    return 0;
    
}
