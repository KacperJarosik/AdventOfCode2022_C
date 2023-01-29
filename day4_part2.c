#include <stdio.h>

int main() {
    int same=0;
    int first1,second1,first2,second2;
    for(;;){
        scanf("%d-%d,%d-%d",&first1,&second1,&first2,&second2);
        if(!((first1>second2 || second1<first2)||(first2>second1 || second2<first1))){
            same++;
            printf("%d\n",same);
        }
    }
    return 0;
}