#include <stdio.h>

int main(){
    char * m[12] = { "Janeiro", "Fevereiro", "Março",
            "Abril", "Maio", "Junho", "Julho", "Agosto",
            "Setembro", "Outubro", "Novembro", "Dezembro" };
    double temp[12];
    int i, maior = 0, menor = 0;
    scanf(" %lf", &temp[0]);
    for(i = 1; i < 12; i++){
        scanf(" %lf", &temp[i]);
        if(temp[i] > temp[maior]){
            maior = i;
        } else if(temp[i] < temp[menor]){
            menor = i;
        }
    }
    for(i = 0; i < 12; i++){
        printf("%s: %.02lf°C\n", m[i], temp[i]);
    }
    printf("maior:\t%s\t%.02lf°C\n",
        m[maior], temp[maior]);
    printf("menor:\t%s\t%.02lf°C\n",
        m[menor], temp[menor]);
        
    return 0;
    
}
