#include<stdio.h>
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
        arr[i]=(arr[arr[i]]%n)*n+arr[i];
    for(int i=0;i<n;i++)
        printf("%d",arr[i]/n);
    return 0;

}
