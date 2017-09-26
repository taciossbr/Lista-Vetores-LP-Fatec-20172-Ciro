#include <stdio.h>

int main(){
    int n;
    scanf(" %d", &n);
    
    int v[n], i;
    for(i = 0; i < n; i++){
        scanf(" %d", &v[i]);
    }
    int j = n - 1, aux;
    for(i = 0; i < j; i++){
        aux = v[i];
        v[i] = v[j];
        v[j--] = aux;
    }
    for(i = 0; i < n; i++){
        printf("%d, ", v[i]);
    }
    putchar('\n');
    
    return 0;
    
}
