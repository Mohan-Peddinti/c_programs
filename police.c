#include<stdio.h>

int main(){
    int n=0,i,a,ic=0,rc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a>0){
            rc=rc+a;
        }
        else{
            if(rc>0){
                rc=rc-1;
            }
            else{
                ic=ic+1;
            }
        }
        
    }
    printf("%d",ic);
}