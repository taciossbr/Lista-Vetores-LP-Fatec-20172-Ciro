#include <stdio.h>
#include <ctype.h>

int main(){
    int i, j, m[10][10] = { {0} };
    for(i = 0; i < 10; i++){
        m[i][i] = 1;
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++)
            printf("%d ", m[i][j]);
        putchar('\n');
    }
        
    return 0;
    
}
