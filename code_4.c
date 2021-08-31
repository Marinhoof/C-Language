#include <stdio.h>


main()
{
    float s = 1045, comi1, comi2, valor1, valor2, valor3, st; 
    printf("Insira os 3 maiores valores de carro que vendeu: ");
    scanf("%f", &valor1);
    scanf("%f", &valor2);
    scanf("%f", &valor3);
    
    comi1=(0.042*valor1)+(0.042*valor3)+(0.042*valor3);
    comi2=(comi1*0.05);
    st=s+comi1+comi2;
    
    printf("O salario total é de %.2f", st);
    
    
}
