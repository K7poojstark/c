#include <stdio.h>

int main() {
    char str[100];
    int count=0,i=0;
    scanf("%s",str);
    while(str[i]){
        count++;
        if(str[i]!=str[i+1]){
            printf("%d%c",count,str[i]);
            count=0;
        }i++;
    }
    ]
