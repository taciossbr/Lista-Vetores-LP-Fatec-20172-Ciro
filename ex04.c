#include <stdio.h>

int main(){
    printf("digite 15 numeros inteiros: \n");
    int v[15], i;
    
    for(i = 0; i < 15; i++){
        scanf(" %d", &v[i]);
    }
        
    for(i = 0; i < 15; i++){
        if(v[i] % 2 == 0){
            printf("O %do numero(%d) é  par\n",
                    i + 1, v[i]);
        } else {
            printf("O %do numero(%d) é impar\n",
                    i + 1, v[i]);
        }
    }
    
    return 0;
    
}
