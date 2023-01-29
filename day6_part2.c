#include <stdio.h>

int main() {
    int end=0;
    char tab[14];
    int licznik_znakow=14;
    int k;
    for(int i =0; i<14;i++){
        tab[i]=getchar();
    }
    while(1){
        end=1;
        for(int i =0;i<14;i++){
            for (int m =0;m<14;m++){
                if(m!=i){
                    if(tab[m]==tab[i]){
                        end=0;
                        break;
                    }
                }
            }
        }
        if(end==1){
            break;
        }
        k=licznik_znakow%14;
        tab[k]=getchar();
        licznik_znakow++;
    }
    printf("%d",licznik_znakow);
    return 0;
}