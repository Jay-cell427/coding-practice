#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int i, j, n=150,P[n];
    bool iIsPrime;
    for(i=2; i<n; i++){
        P[i]=0;
    }
for(i=2; i<n; i++){
    if(P[i]==0){
        iIsPrime=true;}
        for(j=2; i*j<=n; j++){
            P[i*j]=1;
            }
            if(iIsPrime==true){
                printf("%d  ",i);
            }
        
}
return 0;
}
