#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int part1();

int part2();

int main() {
    printf("Result Part 1: %d\n", part1());
    printf("Result Part 2: %d\n", part2());
    return 0;
}

int part1() {
    FILE *fp;
    char line[SIZE];
    if ((fp = fopen("../input_day03.txt", "r")) == NULL) {
        printf("The file input_day03 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char buffer = ' ';
    int sum = 0;
    char repeated_letter;
    while (1) {
        buffer = fgetc(fp);
        if (buffer == EOF) {
            break;
        } else {
            ungetc(buffer, fp);
        }
        if (!fscanf(fp, "%s", line)) {
            printf("Incorrect input");
            return 1;
        }
        int line_len = strlen(line);
        for (int k = 0; k < line_len / 2; k++) {
            for (int i = line_len / 2; i < line_len; i++) {
                if (line[k] == line[i]) {
                    repeated_letter = line[k];
                }
            }
        }
        switch (repeated_letter) {
            case 'a':
                sum += 1;
                break;
            case 'b':
                sum += 2;
                break;
            case 'c':
                sum += 3;
                break;
            case 'd':
                sum += 4;
                break;
            case 'e':
                sum += 5;
                break;
            case 'f':
                sum += 6;
                break;
            case 'g':
                sum += 7;
                break;
            case 'h':
                sum += 8;
                break;
            case 'i':
                sum += 9;
                break;
            case 'j':
                sum += 10;
                break;
            case 'k':
                sum += 11;
                break;
            case 'l':
                sum += 12;
                break;
            case 'm':
                sum += 13;
                break;
            case 'n':
                sum += 14;
                break;
            case 'o':
                sum += 15;
                break;
            case 'p':
                sum += 16;
                break;
            case 'q':
                sum += 17;
                break;
            case 'r':
                sum += 18;
                break;
            case 's':
                sum += 19;
                break;
            case 't':
                sum += 20;
                break;
            case 'u':
                sum += 21;
                break;
            case 'v':
                sum += 22;
                break;
            case 'w':
                sum += 23;
                break;
            case 'x':
                sum += 24;
                break;
            case 'y':
                sum += 25;
                break;
            case 'z':
                sum += 26;
                break;
            case 'A':
                sum += 27;
                break;
            case 'B':
                sum += 28;
                break;
            case 'C':
                sum += 29;
                break;
            case 'D':
                sum += 30;
                break;
            case 'E':
                sum += 31;
                break;
            case 'F':
                sum += 32;
                break;
            case 'G':
                sum += 33;
                break;
            case 'H':
                sum += 34;
                break;
            case 'I':
                sum += 35;
                break;
            case 'J':
                sum += 36;
                break;
            case 'K':
                sum += 37;
                break;
            case 'L':
                sum += 38;
                break;
            case 'M':
                sum += 39;
                break;
            case 'N':
                sum += 40;
                break;
            case 'O':
                sum += 41;
                break;
            case 'P':
                sum += 42;
                break;
            case 'Q':
                sum += 43;
                break;
            case 'R':
                sum += 44;
                break;
            case 'S':
                sum += 45;
                break;
            case 'T':
                sum += 46;
                break;
            case 'U':
                sum += 47;
                break;
            case 'V':
                sum += 48;
                break;
            case 'W':
                sum += 49;
                break;
            case 'X':
                sum += 50;
                break;
            case 'Y':
                sum += 51;
                break;
            case 'Z':
                sum += 52;
                break;
            default:
                break;
        }
    }
    fclose(fp);
    return sum;
}

int part2() {
    FILE *fp;
    if ((fp = fopen("../input_day03.txt", "r")) == NULL) {
        printf("The file input_day03 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char buffer;
    int upper_letters_block[27] = {0};
    int lower_letters_block[27] = {0};
    int number_of_characters_1 = 0;
    int number_of_characters_2 = 0;
    int number_of_characters_3 = 0;
    int sum = 0;
    char backpack1[SIZE];
    char backpack2[SIZE];
    char backpack3[SIZE];
    for (;;) {
        buffer = fgetc(fp);
        if (buffer == EOF) {
            break;
        } else {
            ungetc(buffer, fp);
        }
        //1.
        fscanf(fp, "%s", backpack1);
        for (int m = 0; m < 100; m++) {
            if (backpack1[m] == '\0') {
                break;
            }
            number_of_characters_1++;
        }

        //2.
        buffer = fgetc(fp);
        if (buffer == EOF) {
            break;
        } else {
            ungetc(buffer, fp);
        }
        fscanf(fp, "%s", backpack2);
        for (int m = 0; m < 100; m++) {
            if (backpack2[m] == '\0') {
                break;
            }
            number_of_characters_2++;
        }
        //3.
        buffer = fgetc(fp);
        if (buffer == EOF) {
            break;
        } else {
            ungetc(buffer, fp);
        }
        fscanf(fp, "%s", backpack3);
        for (int m = 0; m < 100; m++) {
            if (backpack3[m] == '\0') {
                break;
            }
            number_of_characters_3++;
        }
        //
        for (int i = 0; i < number_of_characters_1; i++) {
            for (int k = 0; k < number_of_characters_2; k++) {
                for (int m = 0; m < number_of_characters_3; m++) {
                    if (backpack1[i] == backpack2[k] && backpack3[m] == backpack2[k]) {
                        switch (backpack1[i]) {
                            case 'a':
                                if (lower_letters_block[0] == 0) {
                                    lower_letters_block[0] = 1;
                                    sum += 1;
                                }
                                break;
                            case 'b':
                                if (lower_letters_block[1] == 0) {
                                    lower_letters_block[1] = 1;
                                    sum += 2;
                                }
                                break;
                            case 'c':
                                if (lower_letters_block[2] == 0) {
                                    lower_letters_block[2] = 1;
                                    sum += 3;
                                }
                                break;
                            case 'd':
                                if (lower_letters_block[3] == 0) {
                                    lower_letters_block[3] = 1;
                                    sum += 4;
                                }
                                break;
                            case 'e':
                                if (lower_letters_block[4] == 0) {
                                    lower_letters_block[4] = 1;
                                    sum += 5;
                                }
                                break;
                            case 'f':
                                if (lower_letters_block[5] == 0) {
                                    lower_letters_block[5] = 1;
                                    sum += 6;
                                }
                                break;
                            case 'g':
                                if (lower_letters_block[6] == 0) {
                                    lower_letters_block[6] = 1;
                                    sum += 7;
                                }
                                break;
                            case 'h':
                                if (lower_letters_block[7] == 0) {
                                    lower_letters_block[7] = 1;
                                    sum += 8;
                                }
                                break;
                            case 'i':
                                if (lower_letters_block[8] == 0) {
                                    lower_letters_block[8] = 1;
                                    sum += 9;
                                }
                                break;
                            case 'j':
                                if (lower_letters_block[9] == 0) {
                                    lower_letters_block[9] = 1;
                                    sum += 10;
                                }
                                break;
                            case 'k':
                                if (lower_letters_block[10] == 0) {
                                    lower_letters_block[10] = 1;
                                    sum += 11;
                                }
                                break;
                            case 'l':
                                if (lower_letters_block[11] == 0) {
                                    lower_letters_block[11] = 1;
                                    sum += 12;
                                }
                                break;
                            case 'm':
                                if (lower_letters_block[12] == 0) {
                                    lower_letters_block[12] = 1;
                                    sum += 13;
                                }
                                break;
                            case 'n':
                                if (lower_letters_block[13] == 0) {
                                    lower_letters_block[13] = 1;
                                    sum += 14;
                                }
                                break;
                            case 'o':
                                if (lower_letters_block[14] == 0) {
                                    lower_letters_block[14] = 1;
                                    sum += 15;
                                }
                                break;
                            case 'p':
                                if (lower_letters_block[15] == 0) {
                                    lower_letters_block[15] = 1;
                                    sum += 16;
                                }
                                break;
                            case 'q':
                                if (lower_letters_block[16] == 0) {
                                    lower_letters_block[16] = 1;
                                    sum += 17;
                                }
                                break;
                            case 'r':
                                if (lower_letters_block[17] == 0) {
                                    lower_letters_block[17] = 1;
                                    sum += 18;
                                }
                                break;
                            case 's':
                                if (lower_letters_block[18] == 0) {
                                    lower_letters_block[18] = 1;
                                    sum += 19;
                                }
                                break;
                            case 't':
                                if (lower_letters_block[19] == 0) {
                                    lower_letters_block[19] = 1;
                                    sum += 20;
                                }
                                break;
                            case 'u':
                                if (lower_letters_block[20] == 0) {
                                    lower_letters_block[20] = 1;
                                    sum += 21;
                                }
                                break;
                            case 'v':
                                if (lower_letters_block[21] == 0) {
                                    lower_letters_block[21] = 1;
                                    sum += 22;
                                }
                                break;
                            case 'w':
                                if (lower_letters_block[22] == 0) {
                                    lower_letters_block[22] = 1;
                                    sum += 23;
                                }
                                break;
                            case 'x':
                                if (lower_letters_block[23] == 0) {
                                    lower_letters_block[23] = 1;
                                    sum += 24;
                                }
                                break;
                            case 'y':
                                if (lower_letters_block[24] == 0) {
                                    lower_letters_block[24] = 1;
                                    sum += 25;
                                }
                                break;
                            case 'z':
                                if (lower_letters_block[21] == 0) {
                                    lower_letters_block[21] = 1;
                                    sum += 26;
                                }
                                break;
                                //
                            case 'A':
                                if (lower_letters_block[0] == 0) {
                                    lower_letters_block[0] = 1;
                                    sum += 1 + 26;
                                }
                                break;
                            case 'B':
                                if (lower_letters_block[1] == 0) {
                                    lower_letters_block[1] = 1;
                                    sum += 2 + 26;
                                }
                                break;
                            case 'C':
                                if (lower_letters_block[2] == 0) {
                                    lower_letters_block[2] = 1;
                                    sum += 3 + 26;
                                }
                                break;
                            case 'D':
                                if (lower_letters_block[3] == 0) {
                                    lower_letters_block[3] = 1;
                                    sum += 4 + 26;
                                }
                                break;
                            case 'E':
                                if (lower_letters_block[4] == 0) {
                                    lower_letters_block[4] = 1;
                                    sum += 5 + 26;
                                }
                                break;
                            case 'F':
                                if (lower_letters_block[5] == 0) {
                                    lower_letters_block[5] = 1;
                                    sum += 6 + 26;
                                }
                                break;
                            case 'G':
                                if (lower_letters_block[6] == 0) {
                                    lower_letters_block[6] = 1;
                                    sum += 7 + 26;
                                }
                                break;
                            case 'H':
                                if (lower_letters_block[7] == 0) {
                                    lower_letters_block[7] = 1;
                                    sum += 8 + 26;
                                }
                                break;
                            case 'I':
                                if (lower_letters_block[8] == 0) {
                                    lower_letters_block[8] = 1;
                                    sum += 9 + 26;
                                }
                                break;
                            case 'J':
                                if (lower_letters_block[9] == 0) {
                                    lower_letters_block[9] = 1;
                                    sum += 10 + 26;
                                }
                                break;
                            case 'K':
                                if (lower_letters_block[10] == 0) {
                                    lower_letters_block[10] = 1;
                                    sum += 11 + 26;
                                }
                                break;
                            case 'L':
                                if (lower_letters_block[11] == 0) {
                                    lower_letters_block[11] = 1;
                                    sum += 12 + 26;
                                }
                                break;
                            case 'M':
                                if (lower_letters_block[12] == 0) {
                                    lower_letters_block[12] = 1;
                                    sum += 13 + 26;
                                }
                                break;
                            case 'N':
                                if (lower_letters_block[13] == 0) {
                                    lower_letters_block[13] = 1;
                                    sum += 14 + 26;
                                }
                                break;
                            case 'O':
                                if (lower_letters_block[14] == 0) {
                                    lower_letters_block[14] = 1;
                                    sum += 15 + 26;
                                }
                                break;
                            case 'P':
                                if (lower_letters_block[15] == 0) {
                                    lower_letters_block[15] = 1;
                                    sum += 16 + 26;
                                }
                                break;
                            case 'Q':
                                if (lower_letters_block[16] == 0) {
                                    lower_letters_block[16] = 1;
                                    sum += 17 + 26;
                                }
                                break;
                            case 'R':
                                if (lower_letters_block[17] == 0) {
                                    lower_letters_block[17] = 1;
                                    sum += 18 + 26;
                                }
                                break;
                            case 'S':
                                if (lower_letters_block[18] == 0) {
                                    lower_letters_block[18] = 1;
                                    sum += 19 + 26;
                                }
                                break;
                            case 'T':
                                if (lower_letters_block[19] == 0) {
                                    lower_letters_block[19] = 1;
                                    sum += 20 + 26;
                                }
                                break;
                            case 'U':
                                if (lower_letters_block[20] == 0) {
                                    lower_letters_block[20] = 1;
                                    sum += 21 + 26;
                                }
                                break;
                            case 'V':
                                if (lower_letters_block[21] == 0) {
                                    lower_letters_block[21] = 1;
                                    sum += 22 + 26;
                                }
                                break;
                            case 'W':
                                if (lower_letters_block[22] == 0) {
                                    lower_letters_block[22] = 1;
                                    sum += 23 + 26;
                                }
                                break;
                            case 'X':
                                if (lower_letters_block[23] == 0) {
                                    lower_letters_block[23] = 1;
                                    sum += 24 + 26;
                                }
                                break;
                            case 'Y':
                                if (lower_letters_block[24] == 0) {
                                    lower_letters_block[24] = 1;
                                    sum += 25 + 26;
                                }
                                break;
                            case 'Z':
                                if (lower_letters_block[21] == 0) {
                                    lower_letters_block[21] = 1;
                                    sum += 26 + 26;
                                }
                                break;
                            default:
                                break;
                        }
                    }
                }
            }
        }
        for (int u = 0; u < 27; u++) {
            lower_letters_block[u] = 0;
            upper_letters_block[u] = 0;
        }
        number_of_characters_1 = 0;
        number_of_characters_2 = 0;
        number_of_characters_3 = 0;
        backpack1[0] = '\0';
        backpack2[0] = '\0';
        backpack3[0] = '\0';
    }
    fclose(fp);
    return sum;
}