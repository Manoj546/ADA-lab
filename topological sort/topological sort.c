#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int adjacency[n][n],count,maxcount=0,a[n];
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            scanf("%d",&adjacency[i][j]);
            if(adjacency[i][j]==0)
            count++;
        }
        a[i]=count;
        if(count>maxcount)
        maxcount=count;
    }
    for(int i=0;i<=maxcount;i++){
        for(int j=0;j<n;j++){
            if(a[j]==0)
            printf("%d\t",(j+1));
            if(a[j]>=0)
            a[j]--;
        }
    }
}