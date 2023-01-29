#include <stdio.h>

int main() {
    char tab[4];
    int licznik_znakow=4;
    int k;
    tab[0]=getchar();
    tab[1]=getchar();
    tab[2]=getchar();
    tab[3]=getchar();
    while(1){
        if(!(tab[0]==tab[1] || tab[0]==tab[2] || tab[0]==tab[3] || tab[1]==tab[2] || tab[1]==tab[3] || tab[2]==tab[3])){
            break;
        }
        k=licznik_znakow%4;
        tab[k]=getchar();
        licznik_znakow++;
    }
    printf("%d",licznik_znakow);
    return 0;
}