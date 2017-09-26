#include <stdio.h>
#include <ctype.h>

int main(){
    int n, d[61] = {}, e[61] = {}, i, tmp;
    char t;
    while(scanf(" %d", &n)!='\0'){
        for(i = 0; i < n; i++){
            scanf("%d %c", &tmp, &t);
            t = toupper(t);
            if(t == 'D')
                d[tmp]++;
            else
                e[tmp]++;
        }
        int total = 0;
        for(i = 30; i < 61; i++){
            if(d[i] <= e[i])
                total += d[i];
            else
                total += e[i];
        }
        printf("%d\n", total);
    }
    return 0;
    
}
