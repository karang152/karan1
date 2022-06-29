#include<stdio.h>
int gcd(int x,int y){
    if(x==0)
    return y;
    return gcd(y%x,x);
}
int main(){ 
    int x, y;
    printf("enter two integers");
    scanf("%d %d",&x, &y);
    printf("gcd(%d,%d)=%d",x,y,gcd(x,y));
    return 0;
}