/*MOINUL*/
#include <stdio.h>

int main() {
    int code1,code2,unit1,unit2;
    float price1,price2,s1,s2,x;
    scanf("%d%d%f",&code1,&unit1,&price1);
    scanf("%d%d%f",&code2,&unit2,&price2);
    s1=unit1*price1;
    s2=unit2*price2;
    x=s1+s2;
    printf("VALOR A PAGAR: R$ %.2f\n",x);

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */

    return 0;
}
