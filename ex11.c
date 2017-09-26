#include <stdio.h>

int main(){
    int n;
    scanf(" %d", &n);
    int m[n][n], v[n];
    scanf(" %d",&m[0][0]);
    v[0] = 1;
    int linha = 0, i, j = 1, tmp;
    for(i = 1; i < n; i++){
        scanf(" %d", &tmp);
        if(tmp > m[linha][j - 1]){
            m[linha][j++] = tmp;
            v[linha]++;
        } else {
            m[++linha][0] = tmp;
            j = 1;
            v[linha] = 1;
        }
    }
    int maior = 0;
    for(i = 1; i <= linha; i++)
        if(v[maior] < v[i])
            maior = i;
    for(i = 0; i < v[maior]; i++)
        printf("%d,", m[maior][i]);
    putchar('\n');
    return 0;
    
}
