#include <stdio.h>
#include <stdlib.h>
#define SIZE 99
int part1();

int part2();

int main() {
    printf("Result Part 1: %d\n", part1());
    printf("Result Part 2: %d\n", part2());
    return 0;
}

int part1() {
    FILE *fp;
    if ((fp = fopen("../input_day08.txt", "r")) == NULL) {
        printf("The file input_day08 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char forest[500][500];
    char current_character='0';
    int number_of_visible_trees=0;
    int columns_counter=0;
    int rows_counter=1;
    while (current_character != '\n' && current_character != '\0' && current_character != EOF){
        current_character=fgetc(fp);
        forest[0][columns_counter]=current_character;
        columns_counter++;
    }
    columns_counter--;
    while (1) {
        for (int trees_in_column = 0; trees_in_column < columns_counter; trees_in_column++) {
            char x = getc(fp);
            if (x >= '0' && x <= '9') {
                forest[rows_counter][trees_in_column] = x;
            } else {
                trees_in_column--;
            }
        }
        rows_counter++;
        if(rows_counter == SIZE){
            break;
        }
    }
    number_of_visible_trees+= 2 * SIZE + 2 * (SIZE - 2);
    for(int row=1; row < SIZE - 1; row++){
        for(int column=1; column < SIZE - 1; column++){
            int block=0;

            int left= column - 1;
            int right= column + 1;
            int up= row - 1;
            int down= row + 1;
            int checked_tree=forest[row][column];
            while (left >= 0){
                if(left == 0 && forest[row][left] < checked_tree){
                    number_of_visible_trees++;
                    block=1;
                    break;
                }
                if(forest[row][left] >= checked_tree){
                    break;
                }else{
                    left--;
                }
            }
            if(block==1){
                continue;
            }

            checked_tree=forest[row][column];
            while (right <= (SIZE - 1)){
                if(right == (SIZE - 1) && forest[row][right] < checked_tree){
                    number_of_visible_trees++;
                    block=1;
                    break;
                }
                if(forest[row][right] >= checked_tree){
                    break;
                }else{
                    right++;
                }
            }
            if(block==1){
                continue;
            }

            checked_tree=forest[row][column];
            while (up >= 0){
                if(up == 0 && forest[up][column] < checked_tree){
                    number_of_visible_trees++;
                    block=1;
                    break;
                }
                if(forest[up][column] >= checked_tree){
                    break;
                }else{
                    up--;
                }
            }
            if(block==1){
                continue;
            }

            checked_tree=forest[row][column];
            while (down <= (SIZE - 1)){
                if(down == (SIZE - 1) && forest[down][column] < checked_tree){
                    number_of_visible_trees++;
                    block=1;
                    break;
                }
                if(forest[down][column] >= checked_tree){
                    break;
                }else{
                    down++;
                }
            }
            if(block==1){
                continue;
            }
        }
    }
    fclose(fp);
    return number_of_visible_trees;
}

int part2() {
    FILE *fp;
    if ((fp = fopen("../input_day08.txt", "r")) == NULL) {
        printf("The file input_day08 can not be opened for reading!\n");
        perror("file open error");
        exit(1);
    }
    char forest[500][500];
    char current_character='0';
    int number_of_visible_trees=0;
    int columns_counter=0;
    int rows_counter=1;
    int max_field_of_view=0;
    while (current_character != '\n' && current_character != '\0'){
        current_character=fgetc(fp);
        forest[0][columns_counter]=current_character;
        columns_counter++;
    }
    columns_counter--;
    while (1) {
        for (int trees_in_column = 0; trees_in_column < columns_counter; trees_in_column++) {
            char x = fgetc(fp);
            if (x >= '0' && x <= '9') {
                forest[rows_counter][trees_in_column] = x;
            } else {
                trees_in_column--;
            }
        }
        rows_counter++;
        if(rows_counter == SIZE){
            break;
        }
    }
    number_of_visible_trees+= 2 * SIZE + 2 * (SIZE - 2);
    for(int row=1; row < SIZE - 1; row++){
        for(int column=1; column < SIZE - 1; column++){
            int field_of_view_up=1;
            int field_of_view_down=1;
            int field_of_view_left=1;
            int field_of_view_right=1;
            int value_field_of_view;

            int left= column - 1;
            int right= column + 1;
            int up= row - 1;
            int down= row + 1;
            int checked_tree=forest[row][column];
            while (left >= 0){
                if(left == 0 && forest[row][left] < checked_tree){
                    number_of_visible_trees++;
                    break;
                }
                if(forest[row][left] >= checked_tree){
                    break;
                }else{
                    field_of_view_left++;
                    left--;
                }
            }

            checked_tree=forest[row][column];
            while (right <= (SIZE - 1)){
                if(right == (SIZE - 1) && forest[row][right] < checked_tree){
                    number_of_visible_trees++;
                    break;
                }
                if(forest[row][right] >= checked_tree){
                    break;
                }else{
                    field_of_view_right++;
                    right++;
                }
            }

            checked_tree=forest[row][column];
            while (up >= 0){
                if(up == 0 && forest[up][column] < checked_tree){
                    number_of_visible_trees++;
                    break;
                }
                if(forest[up][column] >= checked_tree){
                    break;
                }else{
                    field_of_view_up++;
                    up--;
                }
            }

            checked_tree=forest[row][column];
            while (down <= (SIZE - 1)){
                if(down == (SIZE - 1) && forest[down][column] < checked_tree){
                    number_of_visible_trees++;
                    break;
                }
                if(forest[down][column] >= checked_tree){
                    break;
                }else{
                    field_of_view_down++;
                    down++;
                }
            }
            value_field_of_view= field_of_view_down * field_of_view_up * field_of_view_right * field_of_view_left;
            if(value_field_of_view > max_field_of_view){
                max_field_of_view=value_field_of_view;
            }
        }
    }
    fclose(fp);
    return max_field_of_view;
}