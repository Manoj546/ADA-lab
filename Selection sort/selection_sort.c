#include<stdio.h>
#include<time.h>

void sort(int x){
    int n=x;
    int a[n],max,i,j,k;
    for(i=0;i<n;i++)
    a[i]=i+1;
    double start,end;
    start = clock();
    for(i=0;i<(n-1);i++){
        max=a[i];
        for(j=(i+1);j<n;j++){
            if(max<a[j]){
                max=a[j];
                k=j;
            }
        }
        if(a[i]!=max){
            int temp=a[i];
        a[i]=a[k];
        a[k]=temp;
        }
    }
    end = clock();
    printf("%f\n",(end-start)/CLOCKS_PER_SEC);
    
    n=n+1000;
}
void main(){
    for(int x=1000;x<=10000;x+=1000){
    sort(x);}
}
