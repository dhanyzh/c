#include <stdio.h>
int main()
{
    int num,r;
    int infact=1,infactt=1,infacttt=1;
    printf("entr n:");
    scanf("%d",&num);
    printf("entr r:");
    scanf("%d",&r);
    for(int i=1;i<=num;i++)
    infact=infact*i;
    for(int i=1;i<=r;i++)
    infactt=infactt*i;
    for(int i=1;i<=(num-r);i++)
    infacttt=infacttt*i;
    int ncr = infact/(infactt*infacttt);
    printf("ncr = %d",ncr);
    return 0;
}