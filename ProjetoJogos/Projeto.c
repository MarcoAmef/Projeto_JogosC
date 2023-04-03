#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escMenu = 0;
    printf("\n---BEM-VINDO---\n");
    printf("---Escolha um desses dois jogos---\n");
    printf("---(1) - Perguntas e Respostas---\n");
    printf("---(2) - Cobra na caixa---\n");
    printf("---(3) - Sair---\n");
    printf("Digite o número desejado: \n");
    scanf("%d", &escMenu);
    
    switch(escMenu){
        case 1:
        perguntas(); //Executa o jogo das perguntas.
        break;

        case 2:
        cobra(); //Executa o jogo da cobra.
        break;

        case 3:
        printf("Volte sempre!");
        exit(0);
        break;
    }
}


//Jogos em seus métodos:
int perguntas(){
    setlocale(LC_ALL, "Portuguese");
    int escMenuPerg = 0;
    char str[1] = {'a'}, escJogo;
    while (escMenuPerg != 3)
    {
        printf("\n---PERGUNTAS E RESPOSTAS---\n");
        printf("---(1) - Jogar---\n");
        printf("---(2) - Instruções---\n");
        printf("---(3) - Sair---\n");
        printf("Digite o número desejado: \n");

        scanf("%d", &escMenuPerg);

        switch (escMenuPerg)
        {
        case 1:
            printf("Quanto é 2+2?\n");
            printf("a.2\n");
            printf("b.4\n");
            printf("c.10\n");
            printf("d.22\n");

            scanf("%s", &str);
            for (int i = 0; i < 1; i++)
            {
                if (str[i] == 'b')
                {
                    printf("Certo\n");
                }
                else
                {
                    printf("\nErrado, a resposta correta é 2\n");
                }
            }
            printf("\nQual o sobrenome do professor Fabio?\n");
            printf("a.Araujo\n");
            printf("b.De Melo\n");
            printf("c.Gabriel\n");
            printf("d.Estrada\n");

            scanf("%s", &str);
            for (int i = 0; i < 1; i++)
            {
                if (str[i] == 'a')
                {
                    printf("Certo!\n");
                }
                else
                {
                    printf("Errado, a resposta correta é a letra a - Araújo.\n");
                }
            }
            printf("\nQuem ganhou como melhor ator no oscar 2023?\n");
            printf("a.Brendan Fraser\n");
            printf("b.Paul Mescal\n");
            printf("c.Will Smith\n");
            printf("d.Ke Huy Quan\n");

            scanf("%s", &str);
            for (int i = 0; i < 1; i++)
            {
                if (str[i] == 'a')
                {
                    printf("Certo!\n");
                }
                else
                {
                    printf("Errado, resposta certa letra a - Brendan Fraser.\n");
                }
            }
            printf("\nEm qual album da cantora Taylor swift tem a música August?\n");
            printf("a.Evermore\n");
            printf("b.Folklore\n");
            printf("c.Lover\n");
            printf("d.Red\n");

            scanf("%s", &str);
            for (int i = 0; i < 1; i++)
            {
                if (str[i] == 'b')
                {
                    printf("Certo!\n");
                }
                else
                {
                    printf("Errado!!!! resposta correta é a letra b - Folklore!\n");
                }
            }
            printf("Quantas integrantes tem o girl grupo sul-coreano chamado Red velvet?\n");
            printf("a.5\n");
            printf("b.7\n");
            printf("c.4\n");
            printf("d.3\n");

            scanf("%s", &str);
            for (int i = 0; i < 1; i++)
            {
                if (str[i] == 'a')
                {
                    printf("Certo!\n");
                }
                else
                {
                    printf("Errado!!!!!!!!!! Resposta correta letra a - 5.\n");
                }
            }

            printf("Deseja jogar novamente? s/n\n");
                scanf(" %c", &escJogo);

                if(escJogo == 's' || escJogo == 'S'){
                    perguntas();
                }else{
                    printf("Obrigado por jogar!");
                    break;
                }
            break;

            case 2:
            printf("Esse é um jogo eem que o computador faz uma pergunta e apresenta quatro alternativas, pedindo ao usuário que escolha a alternativa correta. Ao escolher a alternativa, o computador deeve informar se está correta ou incorreta.\n");
            break;

            case 3:
            main();
            break;

            default:
            printf("Inválido!\n");
            break;
        }
    }
}
int cobra(){
    int escMenuCobra = 0, jogSort, caixas[5] = {0, 0, 0, 0, 0}, caixaEsc, i;
    char jog1[20], jog2[20], escJogo;
    setlocale(LC_ALL, "Portuguese");

    while(escMenuCobra != 3){
        printf("\n---COBRA NA CAIXA---\n");
        printf("---(1) - Jogar---\n");
        printf("---(2) - Instruções---\n");
        printf("---(3) - Sair---\n");
        printf("Digite o número desejado: \n");
        scanf("%d", &escMenuCobra);

            switch (escMenuCobra){
            case 1:
                printf("Digite o nome do primeiro jogador: \n");
                scanf("%s", &jog1);
                printf("Digite o nome do segundo jogador: \n");
                scanf("%s", &jog2);
                
                jogSort = rand() % 2 + 1;

                printf("O jogador %s começa!", jogSort == 1 ? jog1 : jog2);
                while(1){
                    printf("%s escolha uma das 5 caixas (1 - 5): \n", jogSort == 1 ? jog1 : jog2);
                    scanf("%d", &caixaEsc);

                    if(caixas[caixaEsc - 1] == 1){
                        printf("Essa caixa já foi escolhida, escolha outra!\n");
                        continue;
                    }

                    caixas[caixaEsc - 1] = 1;

                    i = rand() % 3;

                    if(i == 0){
                        printf("A caixa estava vazia...\n");
                    }else if(i == 1){
                        printf("Tinha uma cobra na caixa!! %s, você perdeu :(\n", jogSort == 1 ? jog1 : jog2);
                        break;
                    }else{
                        printf("Você conseguiu %s! Você achou o botão! Você ganhou!\n", jogSort == 1 ? jog1 : jog2);
                        break;
                    }
                    
                    jogSort = jogSort == 1 ? 2 : 1;
                }

                printf("Deseja jogar novamente? s/n\n");
                scanf(" %c", &escJogo);

                if(escJogo == 's' || escJogo == 'S'){
                    cobra();
                }else{
                    printf("Obrigado por jogar!");
                    break;
                }
                break;
            
            case 2:
                printf("Você e seu colega de trabalho estavam explorando uma tumba do faraó Neebe quando entraram em uma grande sala com escrituras na parede. Enquanto inspecionavam as escrituras, vocês acidentalmente pressionaram um botão escondido que lacrou as portas, prendendo-os lá dentro. Então, cinco caixas apareceram no centro da sala, uma delas contendo o botão para abrir as portas, mas uma delas contem uma cobra mortal! Vocês decidem jogar turnos para abrir uma caixa de cada vez, na esperança de não encontrar a cobra. \n\n Este é um jogo para 2 jogadores. \n");
                break;

            case 3:
                main();
                break;

            default:
                printf("Inválido!");
                break;
       }
    }
}