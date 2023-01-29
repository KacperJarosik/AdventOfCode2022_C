#include <stdio.h>

int main() {
    int duze_block[27]={0};
    int male_block[27]={0};
    int ile_znakow=0;
    int ile_znakow_2=0;
    int ile_znakow_3=0;
    int suma=0;
    char tab[100];
    //char tab1[50];
    //char tab2[50];
    char tab_2[100];
    //char tab1_2[50];
    //char tab2_2[50];
    char tab_3[100];
    // char tab1_3[50];
    //char tab2_3[50];
    printf("Poadaj przegrody\n");
    for(;;) {
        for (int b = 0; b < 3; b++) {
            scanf("%s", tab);
            for (int m = 0; m < 100; m++) {
                if (tab[m] == '\0') {
                    break;
                }
                ile_znakow++;
            }
//       for (int i = 0; i < ile_znakow / 2; i++) {
//           tab1[i] = tab[i];
//       }
//       for (int i = ile_znakow / 2; i < ile_znakow; i++) {
//           tab2[i - ile_znakow / 2] = tab[i];
//       }
            //2.
            scanf("%s", tab_2);
            for (int m = 0; m < 100; m++) {
                if (tab_2[m] == '\0') {
                    break;
                }
                ile_znakow_2++;
            }
//           for (int i = 0; i < ile_znakow_2 / 2; i++) {
//               tab1_2[i] = tab_2[i];
//           }
//           for (int i = ile_znakow_2 / 2; i < ile_znakow_2; i++) {
//               tab2_2[i - ile_znakow_2 / 2] = tab_2[i];
//           }
            //3.
            scanf("%s", tab_3);
            for (int m = 0; m < 100; m++) {
                if (tab_3[m] == '\0') {
                    break;
                }
                ile_znakow_3++;
            }
//           for (int i = 0; i < ile_znakow_3 / 2; i++) {
//               tab1_3[i] = tab_3[i];
//           }
//           for (int i = ile_znakow_3 / 2; i < ile_znakow_3; i++) {
//               tab2_3[i - ile_znakow_3 / 2] = tab_3[i];
//           }
            //
            for (int i = 0; i < ile_znakow; i++) {
                for (int k = 0; k < ile_znakow_2; k++) {
                    for (int m = 0; m < ile_znakow_3; m++) {
                        if (tab[i] == tab_2[k] && tab_3[m]==tab_2[k]) {
                            switch (tab[i]) {
                                case 'a':
                                    if (male_block[0] == 0) {
                                        male_block[0] = 1;
                                        suma += 1;
                                    }
                                    break;
                                case 'b':
                                    if (male_block[1] == 0) {
                                        male_block[1] = 1;
                                        suma += 2;
                                    }
                                    break;
                                case 'c':
                                    if (male_block[2] == 0) {
                                        male_block[2] = 1;
                                        suma += 3;
                                    }
                                    break;
                                case 'd':
                                    if (male_block[3] == 0) {
                                        male_block[3] = 1;
                                        suma += 4;
                                    }
                                    break;
                                case 'e':
                                    if (male_block[4] == 0) {
                                        male_block[4] = 1;
                                        suma += 5;
                                    }
                                    break;
                                case 'f':
                                    if (male_block[5] == 0) {
                                        male_block[5] = 1;
                                        suma += 6;
                                    }
                                    break;
                                case 'g':
                                    if (male_block[6] == 0) {
                                        male_block[6] = 1;
                                        suma += 7;
                                    }
                                    break;
                                case 'h':
                                    if (male_block[7] == 0) {
                                        male_block[7] = 1;
                                        suma += 8;
                                    }
                                    break;
                                case 'i':
                                    if (male_block[8] == 0) {
                                        male_block[8] = 1;
                                        suma += 9;
                                    }
                                    break;
                                case 'j':
                                    if (male_block[9] == 0) {
                                        male_block[9] = 1;
                                        suma += 10;
                                    }
                                    break;
                                case 'k':
                                    if (male_block[10] == 0) {
                                        male_block[10] = 1;
                                        suma += 11;
                                    }
                                    break;
                                case 'l':
                                    if (male_block[11] == 0) {
                                        male_block[11] = 1;
                                        suma += 12;
                                    }
                                    break;
                                case 'm':
                                    if (male_block[12] == 0) {
                                        male_block[12] = 1;
                                        suma += 13;
                                    }
                                    break;
                                case 'n':
                                    if (male_block[13] == 0) {
                                        male_block[13] = 1;
                                        suma += 14;
                                    }
                                    break;
                                case 'o':
                                    if (male_block[14] == 0) {
                                        male_block[14] = 1;
                                        suma += 15;
                                    }
                                    break;
                                case 'p':
                                    if (male_block[15] == 0) {
                                        male_block[15] = 1;
                                        suma += 16;
                                    }
                                    break;
                                case 'q':
                                    if (male_block[16] == 0) {
                                        male_block[16] = 1;
                                        suma += 17;
                                    }
                                    break;
                                case 'r':
                                    if (male_block[17] == 0) {
                                        male_block[17] = 1;
                                        suma += 18;
                                    }
                                    break;
                                case 's':
                                    if (male_block[18] == 0) {
                                        male_block[18] = 1;
                                        suma += 19;
                                    }
                                    break;
                                case 't':
                                    if (male_block[19] == 0) {
                                        male_block[19] = 1;
                                        suma += 20;
                                    }
                                    break;
                                case 'u':
                                    if (male_block[20] == 0) {
                                        male_block[20] = 1;
                                        suma += 21;
                                    }
                                    break;
                                case 'v':
                                    if (male_block[21] == 0) {
                                        male_block[21] = 1;
                                        suma += 22;
                                    }
                                    break;
                                case 'w':
                                    if (male_block[22] == 0) {
                                        male_block[22] = 1;
                                        suma += 23;
                                    }
                                    break;
                                case 'x':
                                    if (male_block[23] == 0) {
                                        male_block[23] = 1;
                                        suma += 24;
                                    }
                                    break;
                                case 'y':
                                    if (male_block[24] == 0) {
                                        male_block[24] = 1;
                                        suma += 25;
                                    }
                                    break;
                                case 'z':
                                    if (male_block[21] == 0) {
                                        male_block[21] = 1;
                                        suma += 26;
                                    }
                                    break;
                                    //
                                case 'A':
                                    if (male_block[0] == 0) {
                                        male_block[0] = 1;
                                        suma += 1 + 26;
                                    }
                                    break;
                                case 'B':
                                    if (male_block[1] == 0) {
                                        male_block[1] = 1;
                                        suma += 2 + 26;
                                    }
                                    break;
                                case 'C':
                                    if (male_block[2] == 0) {
                                        male_block[2] = 1;
                                        suma += 3 + 26;
                                    }
                                    break;
                                case 'D':
                                    if (male_block[3] == 0) {
                                        male_block[3] = 1;
                                        suma += 4 + 26;
                                    }
                                    break;
                                case 'E':
                                    if (male_block[4] == 0) {
                                        male_block[4] = 1;
                                        suma += 5 + 26;
                                    }
                                    break;
                                case 'F':
                                    if (male_block[5] == 0) {
                                        male_block[5] = 1;
                                        suma += 6 + 26;
                                    }
                                    break;
                                case 'G':
                                    if (male_block[6] == 0) {
                                        male_block[6] = 1;
                                        suma += 7 + 26;
                                    }
                                    break;
                                case 'H':
                                    if (male_block[7] == 0) {
                                        male_block[7] = 1;
                                        suma += 8 + 26;
                                    }
                                    break;
                                case 'I':
                                    if (male_block[8] == 0) {
                                        male_block[8] = 1;
                                        suma += 9 + 26;
                                    }
                                    break;
                                case 'J':
                                    if (male_block[9] == 0) {
                                        male_block[9] = 1;
                                        suma += 10 + 26;
                                    }
                                    break;
                                case 'K':
                                    if (male_block[10] == 0) {
                                        male_block[10] = 1;
                                        suma += 11 + 26;
                                    }
                                    break;
                                case 'L':
                                    if (male_block[11] == 0) {
                                        male_block[11] = 1;
                                        suma += 12 + 26;
                                    }
                                    break;
                                case 'M':
                                    if (male_block[12] == 0) {
                                        male_block[12] = 1;
                                        suma += 13 + 26;
                                    }
                                    break;
                                case 'N':
                                    if (male_block[13] == 0) {
                                        male_block[13] = 1;
                                        suma += 14 + 26;
                                    }
                                    break;
                                case 'O':
                                    if (male_block[14] == 0) {
                                        male_block[14] = 1;
                                        suma += 15 + 26;
                                    }
                                    break;
                                case 'P':
                                    if (male_block[15] == 0) {
                                        male_block[15] = 1;
                                        suma += 16 + 26;
                                    }
                                    break;
                                case 'Q':
                                    if (male_block[16] == 0) {
                                        male_block[16] = 1;
                                        suma += 17 + 26;
                                    }
                                    break;
                                case 'R':
                                    if (male_block[17] == 0) {
                                        male_block[17] = 1;
                                        suma += 18 + 26;
                                    }
                                    break;
                                case 'S':
                                    if (male_block[18] == 0) {
                                        male_block[18] = 1;
                                        suma += 19 + 26;
                                    }
                                    break;
                                case 'T':
                                    if (male_block[19] == 0) {
                                        male_block[19] = 1;
                                        suma += 20 + 26;
                                    }
                                    break;
                                case 'U':
                                    if (male_block[20] == 0) {
                                        male_block[20] = 1;
                                        suma += 21 + 26;
                                    }
                                    break;
                                case 'V':
                                    if (male_block[21] == 0) {
                                        male_block[21] = 1;
                                        suma += 22 + 26;
                                    }
                                    break;
                                case 'W':
                                    if (male_block[22] == 0) {
                                        male_block[22] = 1;
                                        suma += 23 + 26;
                                    }
                                    break;
                                case 'X':
                                    if (male_block[23] == 0) {
                                        male_block[23] = 1;
                                        suma += 24 + 26;
                                    }
                                    break;
                                case 'Y':
                                    if (male_block[24] == 0) {
                                        male_block[24] = 1;
                                        suma += 25 + 26;
                                    }
                                    break;
                                case 'Z':
                                    if (male_block[21] == 0) {
                                        male_block[21] = 1;
                                        suma += 26 + 26;
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
                male_block[u] = 0;
                duze_block[u] = 0;
            }
            ile_znakow = 0;
            ile_znakow_2 = 0;
            ile_znakow_3 = 0;
            //tab1[0] = '\0';
            //tab2[0] = '\0';
            tab[0] = '\0';
            tab_2[0] = '\0';
            tab_3[0] = '\0';
            printf("%d\n", suma);
        }
    }

    return 0;
}