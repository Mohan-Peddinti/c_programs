#include<stdio.h>
 
int main(){
    int K;
    scanf("%d",&K);
    if (K==2){
        printf("NO");
    }
    else if (K&1){
        printf("NO");
    }
    else{
    printf("YES");
    }
    return 0;
}
