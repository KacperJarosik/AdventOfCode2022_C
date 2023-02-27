#include <stdio.h>
#include <stdlib.h>

int part1();

int part2();

int main() {
    printf("Result Part 1: %d\n", part1());
    printf("Result Part 2: %d\n", part2());
    return 0;
}

int part1() {
    FILE *fp;
    if ((fp = fopen("../input_day02.txt", "r")) == NULL) {
        printf("The file input_day01 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char first, second;
    char buffer;
    int sum = 0;

    while (1) {
        buffer = fgetc(fp);
        if (buffer != '\n') {
            if (buffer == EOF) {
                break;
            } else {
                ungetc(buffer, fp);
            }
        }

        if (fscanf(fp, "%c %c[^\n]", &first, &second) != 2) {
            printf("Incorrect input");
            return 1;
        }
        if (first == 'A') {
            if (second == 'X') {
                sum += 1 + 3;
            }
            if (second == 'Y') {
                sum += 2 + 6;
            }
            if (second == 'Z') {
                sum += 3 + 0;
            }
        }

        if (first == 'B') {
            if (second == 'X') {
                sum += 1 + 0;
            }
            if (second == 'Y') {
                sum += 2 + 3;
            }
            if (second == 'Z') {
                sum += 3 + 6;
            }
        }

        if (first == 'C') {
            if (second == 'X') {
                sum += 1 + 6;
            }
            if (second == 'Y') {
                sum += 2 + 0;
            }
            if (second == 'Z') {
                sum += 3 + 3;
            }
        }

    }

    return sum;
}

int part2() {
    FILE *fp;
    if ((fp = fopen("../input_day02.txt", "r")) == NULL) {
        printf("The file input_day01 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char first, second;
    char buffer;
    int sum = 0;

    while (1) {
        buffer = fgetc(fp);
        if (buffer != '\n') {
            if (buffer == EOF) {
                break;
            } else {
                ungetc(buffer, fp);
            }
        }

        if (fscanf(fp, "\n%c %c[^\n]", &first, &second) != 2) {
            printf("Incorrect input");
            return 1;
        }
        if (first == 'A') {
            if (second == 'X') {
                sum += 3 + 0;
            }
            if (second == 'Y') {
                sum += 1 + 3;
            }
            if (second == 'Z') {
                sum += 2 + 6;
            }
        }

        if (first == 'B') {
            if (second == 'X') {
                sum += 1 + 0;
            }
            if (second == 'Y') {
                sum += 2 + 3;
            }
            if (second == 'Z') {
                sum += 3 + 6;
            }
        }

        if (first == 'C') {
            if (second == 'X') {
                sum += 2 + 0;
            }
            if (second == 'Y') {
                sum += 3 + 3;
            }
            if (second == 'Z') {
                sum += 1 + 6;
            }
        }
    }

    return sum;
}