#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <math.h>
void fun(int  a[],int n){
    for(int i=1;i<n;i++){
        int k=i;
        for(int j=(i-1);j>=0;j--){
            if(a[j]<a[k]){
                int temp=a[k];
                a[k]=a[j];
                a[j]=temp;
                k--;
            }
        }
    }
}
void main(){
    int n=1000;
    double start,end;
    while (n<=10000){
        int a[n];
        for(int i=0;i<n;i++){
        a[i] = i;
        }
        start = clock();
        fun(a,n);
        end=clock();
        // for(int i=0;i<n;i++)
        // printf("%d\t",a[i]);
        printf("%f \n",(end-start)/CLOCKS_PER_SEC);
        n=n+1000;
    }
}