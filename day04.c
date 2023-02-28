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
    if ((fp = fopen("../input_day04.txt", "r")) == NULL) {
        printf("The file input_day04 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char buffer = ' ';
    int same = 0;
    int first1, first2, second1, second2;
    for (;;) {
        buffer = fgetc(fp);
        if (buffer != '\n') {
            if (buffer == EOF) {
                break;
            } else {
                ungetc(buffer, fp);
            }
        }
        if (fscanf(fp, "%d-%d,%d-%d", &first1, &second1, &first2, &second2) != 4) {
            printf("Incorrect input");
            return 1;
        }
        if ((first1 <= first2 && second1 >= second2) || (first2 <= first1 && second2 >= second1)) {
            same++;
        }
    }
    fclose(fp);
    return same;
}

int part2() {
    FILE *fp;
    if ((fp = fopen("../input_day04.txt", "r")) == NULL) {
        printf("The file input_day04 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char buffer = ' ';
    int same = 0;
    int first1, second1, first2, second2;
    for (;;) {
        buffer = fgetc(fp);
        if (buffer != '\n') {
            if (buffer == EOF) {
                break;
            } else {
                ungetc(buffer, fp);
            }
        }
        if (fscanf(fp, "%d-%d,%d-%d", &first1, &second1, &first2, &second2) != 4) {
            printf("Incorrect input");
            return 1;
        }
        if (!((first1 > second2 || second1 < first2) || (first2 > second1 || second2 < first1))) {
            same++;
        }
    }
    fclose(fp);
    return same;
}