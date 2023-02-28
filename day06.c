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
    if ((fp = fopen("../input_day06.txt", "r")) == NULL) {
        printf("The file input_day06 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char characters[4];
    int characters_counter = 4;
    int k;
    characters[0] = fgetc(fp);
    characters[1] = fgetc(fp);
    characters[2] = fgetc(fp);
    characters[3] = fgetc(fp);
    while (1) {
        if (!(characters[0] == characters[1] || characters[0] == characters[2] || characters[0] == characters[3] ||
              characters[1] == characters[2] || characters[1] == characters[3] || characters[2] == characters[3])) {
            break;
        }
        k = characters_counter % 4;
        characters[k] = fgetc(fp);
        characters_counter++;
    }
    fclose(fp);
    return characters_counter;
}

int part2() {
    FILE *fp;
    if ((fp = fopen("../input_day06.txt", "r")) == NULL) {
        printf("The file input_day06 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char characters[14];
    int characters_counter = 14;
    int k;
    for (int i = 0; i < 14; i++) {
        characters[i] = fgetc(fp);
    }
    while (1) {

        int end = 1;
        for (int i = 0; i < 14; i++) {
            for (int m = 0; m < 14; m++) {
                if (m != i) {
                    if (characters[m] == characters[i]) {
                        end = 0;
                        break;
                    }
                }
            }
        }
        if (end == 1) {
            break;
        }
        k = characters_counter % 14;
        characters[k] = fgetc(fp);
        characters_counter++;
    }
    return characters_counter;
}