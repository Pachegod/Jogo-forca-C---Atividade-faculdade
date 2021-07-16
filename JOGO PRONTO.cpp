#include <stdio.h>
#include <string.h>
#include <locale.h>


int main() {
    char resposta[20];
    int erros;
    int acertos;
    char letra;
    int i, j;
    int max;

    // --------- Aqui falta a definiçao de idioma - 0.1 ponto
    setlocale(LC_ALL, "Portuguese");
    printf("************ Jogo da Forca ************\n");
    printf("************** Jogador 1 **************\n\n");
    printf("Utilize apenas letras minúsculas.\n");
    printf("Máximo de 20 letras\n\n");

    letra = ' ';
    max = 1;
    for (i = 1; i <= 20; i++) {
        resposta[i] = ' ';
    }
    erros = 0; acertos = 0;

    printf("Digite a palavra secreta: ");
    scanf (" %s", &resposta);
    max = strlen(resposta);
    //system("clear||cls");

    printf("************ Jogo da Forca ************\n");
    printf("************** Jogador 2 **************\n\n");
    printf("Utilize apenas letras minúsculas.\n");
    printf("Limite de 6 erros. Palavra de até 20 letras\n\n");

    while(acertos < max && erros < 7)      // Aqui falta a condição de parada do laço - 0,3 ponto
    {
        printf("Digite uma letra: ");
        scanf (" %c", &letra);
        j = 0;
        for (i = 0; i <= max; i++)
        {
            if (resposta[i] == letra)
            {
                acertos++;
                j++;
                printf ("\nAcertos: %d - Erros: %d\n",acertos, erros);
            }
        }
        if (j <= 0) {
            erros++;
        }
    }
    //* ------------------- Aqui falta a parte responável pela verificação de vitoria ou derrota ----------------------*/
    if (erros == 7){
        printf("\nVocê Perdeu!");
    }else {
        printf("\nParabéns você Ganhou!");
    }
    //* -------------------------------------- Final da Verificação ----------------------------------------------------------------*/
    return (0);
}

//*QUESTÃO 2 - Algumas das melhorias que poderiam ser implementadas é visualização de pontuação também nos erros cometidos, e a inclusão da variavel 'restorno' e 'vida' caso o usuario player 2 erre o retorno ira reduzindo a vida até chegar a 0.//

