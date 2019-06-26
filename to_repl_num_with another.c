#include <stdio.h>

int main() {
    int n,a,b,rev=0,sum=0,power=1;
    scanf("%d",&n);
    scanf("%d%d",&a,&b);
    while(n>=power){
        rev=(n/power)%10;
        if(rev==a)
            rev=b;
        sum=rev*power+sum;
        power=power*10;
    }
    printf("%d",sum);
return 0;
}
