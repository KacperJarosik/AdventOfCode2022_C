#include <stdio.h>
#define SIZE 99
int main() {
    char tablica[500][500];
    char aktualny_znak='0';
    int licznik_widocznych_drzew=0;
    int ile_kolumn=0;
    int ile_wierszy=0;
    while (aktualny_znak!='\n' && aktualny_znak !='\0'){
        aktualny_znak=getchar();
        tablica[0][ile_kolumn]=aktualny_znak;
        ile_kolumn++;
    }
    ile_kolumn--;
    ile_wierszy=1;
    while (1) {
        for (int i = 0; i < ile_kolumn; i++) {
            char x = getchar();
            if (x >= '0' && x <= '9') {
                tablica[ile_wierszy][i] = x;
            } else {
                i--;
            }
        }
        ile_wierszy++;
        if(ile_wierszy==SIZE){
            break;
        }
    }
    licznik_widocznych_drzew+=2*SIZE+2*(SIZE-2);
    for(int m=1;m<SIZE-1;m++){
        for(int k=1;k<SIZE-1;k++){
            int block=0;
            //sprawdzanie w lewo
            int l=k-1;
            int p=k+1;
            int g=m-1;
            int d=m+1;
            int sprawdzana=tablica[m][k];
            while (l>=0){
                if(l==0 && tablica[m][l]<sprawdzana){
                    licznik_widocznych_drzew++;
                    block=1;
                    break;
                }
                if(tablica[m][l]>=sprawdzana){
                    break;
                }else{
                    //sprawdzana=tablica[m][l];
                    l--;
                }
            }
            if(block==1){
                continue;
            }
            //sprawdzanie w prawo
            sprawdzana=tablica[m][k];
            while (p<=(SIZE-1)){
                if(p==(SIZE-1) && tablica[m][p]<sprawdzana){
                    licznik_widocznych_drzew++;
                    block=1;
                    break;
                }
                if(tablica[m][p]>=sprawdzana){
                    break;
                }else{
                    //sprawdzana=tablica[m][p];
                    p++;
                }
            }
            if(block==1){
                continue;
            }
            //sprawdzanie góra
            sprawdzana=tablica[m][k];
            while (g>=0){
                if(g==0 && tablica[g][k]<sprawdzana){
                    licznik_widocznych_drzew++;
                    block=1;
                    break;
                }
                if(tablica[g][k]>=sprawdzana){
                    break;
                }else{
                    //sprawdzana=tablica[g][k];
                    g--;
                }
            }
            if(block==1){
                continue;
            }
            //sprawdzanie dół
            sprawdzana=tablica[m][k];
            while (d<=(SIZE-1)){
                if(d==(SIZE-1) && tablica[d][k]<sprawdzana){
                    licznik_widocznych_drzew++;
                    block=1;
                    break;
                }
                if(tablica[d][k]>=sprawdzana){
                    break;
                }else{
                    //sprawdzana=tablica[d][k];
                    d++;
                }
            }
            if(block==1){
                continue;
            }
        }
    }
    printf("\n%d",licznik_widocznych_drzew);
    return 0;
}