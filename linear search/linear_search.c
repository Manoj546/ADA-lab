#include<stdio.h>
#include<time.h>
void delay(){
    for(int i=0;i<1000;i++);
}
void linear(int n,int a[]){
    for(int i=0;i<n;i++){
        delay();
        if(a[i]==n)
        break;
    }
}
void main(){
    for(int n=1000;n<=10000;n=(n+1000)){
        int a[n];
        for(int i=1;i<=n;i++)
        a[i]=i;
        double start,end;
        start = clock();
        linear(n,a);
        end = clock();
        printf("%f\n",(end-start)/CLOCKS_PER_SEC);
    }
}