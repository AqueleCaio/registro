#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct teste
{

    char sexo, olhos, cabelos;
    int idade;

} teste;

    char sexo[4]; 
    int matriz[4][4];
    int cabelosP, olhosC, resp, olhos, cabelos;
    int sexoF, maiorIdade, idadeIgual, op, i, Nhabitantes=0, idade[4];
    
int main() 
{     
  
    teste pessoa[5];
      
    system("cls");  
        
    // Coleta os dados dos habitantes.
    for (int i=0; i < 4; i++)
    {
        system("cls");
        
        printf ("\nSexo: ( M ) | ( F )\n");     
        scanf ("%s", &sexo[i]);  

        printf ("\nDigite a idade: ");
        scanf("%d", &idade[i]);

        printf("\nCor do cabelo: ( 1 ) Loiro | ( 2 ) Preto | ( 3 ) Castanhos\n");
        scanf("%d", &cabelos);

        printf("\nCor dos olhos: ( 1 ) Azuis | ( 2 ) Castanhos\n");
        scanf("%d", &olhos);

         // Contabiliza o número de habitantes que são registrados.
        Nhabitantes++;

        // Contabiliza o sexo feminino 
        if (sexo[i] == 'F' ||  sexo[i] == 'f' && idade[i] > 18 && idade[i] < 35 && cabelos == 1 && olhos == 1) 
        {
        
            sexoF++;

        }

        /*
            fazer o sistema que calcula a quantidade de pessoas com 
            olhos castanhos e olhos pretos, pois não está funcinando 
            como deveria.
        */
        if (idade[i] == idade[i] && olhos == 2 && cabelos == 2)
        {
            
            olhosC++;
            cabelosP++;
            
            idadeIgual = idade[i];
            resp = olhosC + cabelosP; // A variável "resp" armazena a soma das pessoas com cabelos pretos e olhos castanhos.

        }
    }
  
    // Usa o primeiro valor inserido no vetor para compará-lo.
    maiorIdade = idade[0];
      
    // Compara os valores inseridos no vetor, afim de encontrar o maior.
    for (int i=1; i < 4; i++)
    {
        if (idade[i] > maiorIdade)
        {

            maiorIdade = idade[i];

        }
    }

    // Atribui os dados das variáveis aos registros
    pessoa[i].idade = maiorIdade;
    pessoa[i].sexo = sexo[i];
    pessoa[i].cabelos = cabelos;
    pessoa[i].olhos = olhos;

    // Mostra os dados dos habitantes.
    printf("\n Numero de Pessoas Registradas: %d", Nhabitantes);   
    printf ("\n\n Pessoas com cabelos pretos e olhos castanhos: %d", resp);
    printf ("\n\n O habitante mais velho possui: %d anos de idade", pessoa[i].idade);
    printf ("\n\n Quantidade de mulheres de 18 a 35 ano, loiras com olhos azuais: %d ", sexoF);  
    printf ("\n\n Media de idade das pessoas com cabelos pretos e olhos castanhos: %d", idadeIgual);

    printf ("\n\n Idade dos Habitantes Registrados: \n\n");    

    // Imprime a Diagonal Pricipal com a idade dos habitantes.
    for (int i=0; i < 4; ++i)
    {
        for (int j=0; j < 4; ++j)
        {

            //Se não estiver na diagonal
            if (i != j) 
            printf(" %d ", matriz[i][j]);

            //Imprime espaços em branco na diagonal
            else 
            printf(" %d ", idade[i]);

        }
        printf("\n");
    }


return 0;
}