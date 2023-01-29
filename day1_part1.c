#include <stdio.h>

int main() {
    int counter=0;
    int max=0;
    printf("Podawaj dodatnie liczby. Po wpisaniu ujemnej koniec wprowadzania:\n");

    char buffer;
    int number, sum = 0;

    while (1) {

        buffer = getchar();

        if (buffer == '-') {
            break;
        }

        if (buffer != '\n') {
            counter=0;
            ungetc(buffer, stdin);

            if (!scanf("%d", &number)) {
                printf("Incorrect input");
                return 1;
            }

            sum += number;

        } else {
            counter++;
            if(counter%2==0){
                if(max<sum){
                    max=sum;
                    printf(""
                           "Max = %d\n", max);
                }
                sum=0;
            }
        }

    }

    return 0;
}