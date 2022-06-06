#include <stdio.h>
#include <time.h>
void delay(){
    long i,j,k,l;
    for(i=0;i<1000;i++){
        for(j=0;j<100000;j++);
    }
}
void toh(char a,char b,char c,int n){
    if(n>0){
        toh(a,c,b,n-1);
    printf("%c to %c\n",a,c);
    delay();
    toh(c,b,a,n-1);
    }
}
void main()
{
    char a='a',b='b',c='c';
    int n=3;
    time_t start,end;
    start= time(NULL);
    delay();
    toh('a','b','c',n);
    end= time(NULL);
    printf("The time taken is %lf",(difftime(end,start)));
}
