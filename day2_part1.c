#include <stdio.h>

int main() {
    printf("Poadaj strategie\n");
    char first, second;
    char buffer;
    int sum = 0;

    while (1) {



        if (scanf("\n%c %c[^\n]", &first,&second)!=2) {
            printf("Incorrect input");
            return 1;
        }
        if(first=='A'){
            if(second=='X'){
                sum+=1+3;
            }
            if(second=='Y'){
                sum+=2+6;
            }
            if(second=='Z'){
                sum+=3+0;
            }
        }

        if(first=='B'){
            if(second=='X'){
                sum+=1+0;
            }
            if(second=='Y'){
                sum+=2+3;
            }
            if(second=='Z'){
                sum+=3+6;
            }
        }


        if(first=='C'){
            if(second=='X'){
                sum+=1+6;
            }
            if(second=='Y'){
                sum+=2+0;
            }
            if(second=='Z'){
                sum+=3+3;
            }
        }

        printf("Wynik: %d",sum);
    }

    return 0;
}