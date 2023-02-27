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
    int counter = 0;
    int max = 0;
    FILE *fp;
    if ((fp = fopen("../input_day01.txt", "r")) == NULL) {
        printf("The file input_day01 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char buffer = ' ';
    int number, sum = 0;

    while (buffer != EOF) {
        buffer = fgetc(fp);

        if (buffer != '\n') {
            counter = 0;
            ungetc(buffer, fp);

            if (!fscanf(fp, "%d", &number)) {
                printf("Incorrect input");
                return 1;
            }

            sum += number;

        } else {
            counter++;
            if (counter % 2 == 0) {
                if (max < sum) {
                    max = sum;
                }
                sum = 0;
            }
        }

    }
    fclose(fp);
    return max;
}

int part2() {
    int counter = 0;
    int max1 = 0;
    int max2 = 0;
    int max3 = 0;
    FILE *fp;
    if ((fp = fopen("../input_day01.txt", "r")) == NULL) {
        printf("The file input_day01 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char buffer = ' ';
    int number, sum = 0;

    while (buffer != EOF) {
        buffer = fgetc(fp);

        if (buffer != '\n') {
            counter = 0;
            ungetc(buffer, fp);

            if (!fscanf(fp, "%d", &number)) {
                printf("Incorrect input");
                return 1;
            }

            sum += number;

        } else {
            counter++;
            if (counter % 2 == 0) {
                if (max3 < sum) {
                    max3 = sum;
                }
                sum = 0;
            }
            if (max3 > max2) {
                int memory = max2;
                max2 = max3;
                max3 = memory;
            }
            if (max2 > max1) {
                int memory = max1;
                max1 = max2;
                max2 = memory;
            }
        }

    }
    fclose(fp);
    return max3 + max2 + max1;
}