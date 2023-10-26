#include <stdio.h>
#include <string.h>

int main()
{
    float a=0.0,b=0.0;
    char c;
    
    while(1){
        
        // Pega um simbolo enquanto o usuário não acertar uma das opções
        do{
            printf("\nEscolha a Operação (+,-,*,/,r,f):"); scanf("\n%c",&c);
            if(c=='f') return 0;
            printf("\nDigite dois valores reais sepados por vigula:"); scanf("%f,%f",&a,&b);
        }while (c!='+' && c!='-' && c!='*' && c!='/'  && c!='r');
        
        // Com base na opção digitada escolhe realiza a operação
        if(c=='+'){
            printf("\nSoma:%8.2f",a+b);
        } else if(c=='-'){
            printf("\nSubtracao:%8.2f",a-b);
        } else if (c=='*'){
            printf("\nMultiplicacao:%8.2f",a*b);
        } else if (c=='r'){
            printf("\nResto da divisão:%i",(int)a%(int)b);
        }else if (c=='/'){
            if(b==0) {
                printf("\nDigite um valor diferente de zero para b:");
                do{
                    scanf("%f",&b);
                }while(b==0);
            }
            printf("\nDivisão:%8.2f",a/b);
        }
        
    }
    return 0;
}

