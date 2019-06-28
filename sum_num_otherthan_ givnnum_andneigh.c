
#include <stdio.h>

int main() {
int n,p,i,arr[100],sum=0;
scanf("%d",&n);
scanf("%d",&p);
for(i=0;i<n;i++)
{
   scanf("%d",&arr[i]);
   sum=sum+arr[i];
}
for(i=0;i<n;i++)
{
    if(arr[i]==p)
    {
        sum-=arr[i-1]+arr[i]+arr[i+1];
    }
}
printf("%d",sum);
return 0;
}

