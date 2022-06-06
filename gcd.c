#include <stdio.h>
#include <time.h>
void delay(){
    long i,j,k,l;
    for(i=0;i<10000000;i++);
}
int gcd(int x,int y){
    int z;
    if(y==0)
    return x;
    z=x%y;
    x=y;
    y=z;
    delay();
    return gcd(x,y);
}
void main()
{
    int a,b,c;
    time_t start,end;
    printf("Enter two numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    start= time(NULL);
    delay();
    c=gcd(a,b);
    end= time(NULL);
    printf("The gcd of two numbers is %d\n",c);
    printf("The time taken is %lf",(difftime(end,start)));
}

