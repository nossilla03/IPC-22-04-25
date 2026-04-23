// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float distancia;
    int premium, chuva;

    printf("Digite a distancia da entrega: ");
    scanf("%f", &distancia);

    printf("Cliente premium? (1/0): ");
    scanf("%d", &premium);

    printf("Esta chovendo? (1/0): ");
    scanf("%d", &chuva);

    if (premium == 1){
        if (distancia <= 20){
            printf ("entrega gratuita");
        }
    } else{
        if(distancia <= 10){
            if (chuva == 0){
                printf ("entrega normal");
            }
        } else {
        
            printf ("taxa de entrega");
        }

    return 0;
}
}
