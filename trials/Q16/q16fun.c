    #include <stdio.h>
    int sumofn(int n){
           int sum=0;
   
    for(int i=1;i<=n;i++){
         sum+=i;
    }
    printf("The sum of first %d natural numbers is: %d",n,sum);
}
int main()
    {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    sumofn(n);
    }
