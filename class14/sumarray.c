// sum and prodct of elements in array
#include <stdio.h>
int main()
{
    int sumpro[5];
    int sum = 0;
    int pro = 1;
    for (int i = 0;i <= 4;i++ ){
        printf("enter the elememts  %d :",i);
        scanf("%d",&sumpro[i]);
    }
    for (int i = 0;i <= 4;i++){
        sum = sum + sumpro[i];
        pro = pro * sumpro [i];
    }
printf("the sum of the numbers : %d\n",sum);
printf("the pro of the numbers : %d\n",pro);
return 0 ;
}