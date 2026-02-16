#include <stdio.h>
int main(){
    int n,r;
    printf("enter the numbers");
    scanf("%d""%d",&n,&r);
    int fact_n=1,fact_r=1,fact_n_r=1;
    for(int i=1;i<=n;i++)
    fact_n*=i;
    for(int i=1;i<=(n-r);i++)
    fact_n_r*=i;
    int ncr=(fact_n/fact_n_r);
    printf("the ncr is = %d",ncr);
    return 0;
}