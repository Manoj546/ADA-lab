#include<stdio.h>
#include<time.h>
int n=1000;
void delay(){
    long i,j,k,l;
    for(i=0;i<1000;i++){
        for(j=0;j<100000;j++);
    }
}
void sort(int x){
    int a[n],max,i,j,k;
    for(i=0;i<n;i++)
    a[i]=i+1;
    double start,end;
    start = clock();
    for(i=0;i<n-1;i++){
        //delay();
        max=a[i];
        for(j=i+1;j<n;j++){
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
    //printf("\nn=%d  time= %f \n",n,(end-start)/CLOCKS_PER_SEC);
    n=n+1000;
}
void main(){
    for(int x=0;x<10;x++)
    sort(x);
}
