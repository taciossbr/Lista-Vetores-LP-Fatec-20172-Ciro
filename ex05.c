#include <stdio.h>

int main(){
    int v[8], i;
    printf("digite 8 numeros inteiros: \n");
    for(i = 0; i < 8; i++){
        scanf(" %d", &v[i]);
    }
        
    for(i = 0; i < 8; i++){
        if(v[i] % 6 == 0){
            printf("%d é múltipĺo de 6\n", v[i]);
        } else {
            printf("%d não é múltipĺo de 6\n", v[i]);
        }
    }
    
    return 0;
    
}
