#include <stdio.h>
#include <string.h>
int main(){
    int n;
    while(scanf("%d",&n)==1 && n){
           if(n<3 || n%2) printf("Impossible\n");
    else{
        int i;printf("%d\n",n+n/2);
        for(i=1; i<n; i++)
            printf("%d %d\n",i,i+1);
        printf("1 %d\n",n);
        for(i=1; i<=n/2; i++)
            printf("%d %d\n",i,i+n/2);
    }
    }
    return  0;

}
