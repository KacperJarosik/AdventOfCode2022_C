#include <stdio.h>
#define SIZE 100000
int main() {
    int memory;
    int tab[SIZE]={0};
    int result=0;
    int result_max1=0;
    int result_max2=0;
    int result_max3=0;
    int i =0;
    for(int n=0;n<SIZE;n++){
        for(i;i<SIZE;i++){
            scanf("%d",&tab[i]);
            if(tab[i]>0){
                result+=tab[i];
            } else {
                break;
            }
        }
        if( n==0) {
            result_max1 = result;
            printf("%d\n", result_max1);
            printf("%d\n", result_max2);
            printf("%d\n", result_max3);
            printf("||\n");
            printf("%d\n",result_max1+result_max2+result_max3);
            printf("---------------------------\n");
        }
        if( n==1) {
            result_max2 = result;
            printf("%d\n", result_max1);
            printf("%d\n", result_max2);
            printf("%d\n", result_max3);
            printf("||\n");
            printf("%d\n",result_max1+result_max2+result_max3);
            printf("---------------------------\n");
        }
        if( n==2) {
            result_max3 = result;
            printf("%d\n", result_max1);
            printf("%d\n", result_max2);
            printf("%d\n", result_max3);
            printf("||\n");
            printf("%d\n",result_max1+result_max2+result_max3);
            printf("---------------------------\n");
        }
        if(result>result_max3 && n>2){
            result_max3=result;
            printf("%d\n", result_max1);
            printf("%d\n", result_max2);
            printf("%d\n", result_max3);
            printf("||\n");
            printf("%d\n",result_max1+result_max2+result_max3);
            printf("---------------------------\n");
        } else if(result>result_max2 && n>2){
            result_max2=result;
            printf("%d\n", result_max1);
            printf("%d\n", result_max2);
            printf("%d\n", result_max3);
            printf("||\n");
            printf("%d\n",result_max1+result_max2+result_max3);
            printf("---------------------------\n");
        } else if (result>result_max1 && n>2){
            result_max1=result;
            printf("%d\n", result_max1);
            printf("%d\n", result_max2);
            printf("%d\n", result_max3);
            printf("||\n");
            printf("%d\n",result_max1+result_max2+result_max3);
            printf("---------------------------\n");
        }
        if(result_max3>result_max2){
            memory=result_max2;
            result_max2=result_max3;
            result_max3=memory;
        }
        if(result_max2>result_max1){
            memory=result_max1;
            result_max1=result_max2;
            result_max2=memory;
        }
        result=0;
    }
    return 0;
}