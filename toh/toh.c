#include <stdio.h>
#include <time.h>
void delay(){
    for(int l=0;l<1000;l++);
}
void toh(char a,char b,char c,int n){
    if(n==1){
    printf("%c to %c\n",a,c);
    }
    else{
        delay();
        toh(a,c,b,(n-1));
        printf("%c to %c\n",a,c);
        delay();
        toh(b,a,c,(n-1));
    }
}

void main()
{
    char a='a',b='b',c='c';
    for(int i=1;i<=10;i++){
        double start,end;
        int n=i;
        start = clock();
        delay();
        toh('a','b','c',n);
        end = clock();
        printf("%f \n",(end-start)/CLOCKS_PER_SEC);
    }
}
