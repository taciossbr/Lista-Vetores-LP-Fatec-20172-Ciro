#include <stdio.h>
#include <ctype.h>

int main(){
    int i, j, n;
    scanf(" %d", &n);
    int m[n][n];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf(" %d", &m[i][j]);
    for(i = 0; i < n; i++)
        printf("%d ", m[i][i]);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(i != j)
                printf("%d ", m[i][j]);
    putchar('\n');
    for(j = 0; j < n; j++)
        printf("%d ", m[j][n-1-j]);
    putchar('\n');
    return 0;
    
}
