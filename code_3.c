#include <stdio.h>

main()
{
    float cust_fabrica, perc_distrib, perc_imposto, custo_final;
    printf("Insire o custo para fabricação do carro:R$ ");
    scanf("%f", &cust_fabrica);
    
    perc_distrib=(0.28);
    perc_imposto=(0.45);
    
    custo_final=((cust_fabrica*perc_distrib)*perc_imposto);
    
    printf("No valor final, o carro sairá custando R$ %.2f", custo_final);
}
