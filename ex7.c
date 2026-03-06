/*
7. Existem 2 candidatos para uma vaga no Senado e 20 eleitores, cada eleitor tem direito a 1
voto, onde este pode ser:
0 - voto em branco
1 - candidato 1
2 - candidato 2
outro - voto nulo
Fazer um programa que detecte a contagem de votos, i e, quantos brancos, nulos, candi-
dato 1 e 2.
*/

#include <stdio.h>
#include <stdlib.h>
#define ELEITORES 20

int main() {
    int nulos = 0, c1 = 0, c2 = 0, brancos = 0;
    char voto;

    for (int i=1; i<=ELEITORES; i++) {
        printf("Eleitor %d, registre seu voto: ", i);
        scanf(" %c", &voto);
        switch (voto) {
            case '0':
                brancos++;
                break;
            case '1':
                c1++;
                break;
            case '2':
                c2++;
                break;
            default:
                nulos++;
        }
        system("cls"); // Garante o voto secreto (apenas coloquei para estética)
    }

    printf("===== RESULTADOS DAS ELEICOES =====\n");
    printf("Candidato 1: %d votos.\n", c1);
    printf("Candidato 2: %d votos.\n", c2);
    printf("Votos brancos: %d.\n", brancos);
    printf("Votos nulos: %d.\n", nulos);
    if (c1 == c2) {
        printf("\nHouve um empate. Sera decidido em segundo turno.");
    } else if (c1>c2) {
        printf("\nO Candidato 1 e o VENCEDOR!");
    } else {
        printf("\nO Candidato 2 e o VENCEDOR!");
    }
}