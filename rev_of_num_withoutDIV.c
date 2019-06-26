#include <stdio.h>

int main() {
    int n,rev=0,sum=0,power=1;
    scanf("%d",&n);
    while(n>=power){
        rev=(n/power)%10;
        sum=sum*10+rev;
        power=power*10;
    }
    printf("%d",sum);
return 0;
}
