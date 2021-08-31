#include <stdio.h>

 main()
{   
    float voto_branco, voto_nulo, voto_valido, total, perc_branco, perc_nulo, perc_valido;
     
    
    printf("Em uma eleição municipal houve votos branco, nulos e válidos.\nInsira conforme é pedido o número de votos.\n");
    printf("\nInsira o número de votos brancos: ");
    scanf("%f", &voto_branco);
    printf("\nInsira o número de votos nulos: ");
    scanf("%f", &voto_nulo);
    printf("\nInsira o número de votos válidos: ");
    scanf("%f", &voto_valido);
    
    total=(voto_valido+voto_nulo+voto_branco);
    
    perc_branco=(voto_branco/total)*100;
    perc_nulo=(voto_nulo/total)*100;
    perc_valido=(voto_valido/total)*100;
    
    printf("\nO total de eleitores do municipio é %.0f.", total);
    printf("\nSendo o percentual de votos branco igual %.2f%% ", perc_branco);
    printf("\nPercentual de votos nulos igual %.2f%% ", perc_nulo);
    printf("\nPor fim o votos válidos tiveram a presença de %.2f%% ", perc_valido);
}
