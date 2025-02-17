#include<stdio.h>
int add(int x, int y){
if(y==0){
    return x;}
else{
    return  add(x ^ y, ((x & y)<<1));}
}
    int main(){
    printf("%d", add(1670,9011));
    return 0;
}