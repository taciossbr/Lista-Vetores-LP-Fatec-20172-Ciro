#include <stdio.h>

int main(){
    int n;
    scanf(" %d", &n);
    int d[7] = {}, i, tmp, j;
    for(i = 1; i < n; i++){
        scanf(" %d", &tmp);
        while(tmp < 1 || tmp > 6){
            puts("retry: ");
            scanf(" %d", &tmp);
        }
        d[tmp]++;
    }
    for(i = 1; i < 7; i++){
        printf("%d: ", i);
        for(j = 0; j < d[i]; j++){
            putchar('*');
        }
        printf(" (%d)\n", d[i]);
    }
    return 0;
    
}
