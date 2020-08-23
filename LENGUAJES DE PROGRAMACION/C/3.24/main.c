#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int q,w;
    q=rand()%13+1;
    w=rand()%4+1;

    char *a[]={"Ace","2","3","4","5","6","7","8","9","10","Jack" ,"Queen ","King"};
    char *b[]={"Clubs","Diamante","Corazon" ,"Espada"};
    printf("%d %d",q,w);
    printf("La carta que escogiste fue :%s de %s  ",a[q-1],b[w-1]);
    return 0;
}
