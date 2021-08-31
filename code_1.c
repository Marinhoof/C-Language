#include <stdio.h>

 main()
{   
    float idade, idade_mes, idade_dias, idade_anos;
    printf("Insira sua idade em dias:\n");
    scanf("%f", &idade);
    
    idade_anos=(idade/365);
    idade_mes=(idade_anos*12);
    idade_dias=(idade_anos*365);
    
    printf("Sua idade em anos, meses e dias são: \n");
    printf("%.0f , %.0f e %.0f", idade_anos, idade_mes , idade_dias);
    
}
