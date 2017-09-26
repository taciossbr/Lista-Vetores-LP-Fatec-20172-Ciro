#include <stdio.h>

int main(){
    int n;
    scanf(" %d", &n);
    int v1[n], v2[n], i, tmp;
    for(i = n -1; i > -1; i--){
        do{
            scanf("%d", &tmp);
        } while(tmp < 0 && tmp > 9);
        v1[i] = tmp;
    }
    for(i = n -1; i > -1; i--){
        do{
            scanf("%d", &tmp);
        } while(tmp < 0 && tmp > 9);
        v2[i] = tmp;
    }
    int scape = 0, r, v3[n+1];
    for(i = 0; i < n; i++){
        r = v1[i] + v2[i] + scape;
        v3[i] = r % 10;
        scape = (r - v3[i]) /10;
    }
    v3[i] = scape;
    for(i = n; i > -1;i--)
        printf("%d ", v3[i]);
    putchar('\n');
    
    return 0;
    
}
