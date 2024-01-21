//Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)” 
#include <stdio.h>
 
int main() {
    int a,b; 
    scanf("%d%d",&a,&b); 
    if(a>b) {
    b+=24; 
    printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    else if(a==b) {
     printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }

    return 0;
}



