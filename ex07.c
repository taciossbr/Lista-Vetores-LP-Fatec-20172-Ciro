#include <stdio.h>

int main(){
    double venda[10], compra[10];
    int i;
    for(i = 0; i < 10; i++){
        scanf(" %lf %lf", &venda[i], &compra[i]);
    }
    int l1 = 0, l2 = 0, l3 = 0;
    double l;
    for(i = 0; i < 10; i++){
        l = (venda[i] - compra[i]) * 100 / venda[i];
        if(l < 10.0)
            l1++;
        else if(10.0 <= l && l <= 20.0)
            l2++;
        else
            l3++;
    }
    printf("%d com lucro < 10 %%\n", l1);
    printf("%d com 10 %% <= lucro <= 20%%\n",
            l2);
    printf("%d com lucro > 20%%\n", l3);
    
    return 0;
    
}
