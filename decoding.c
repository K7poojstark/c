#include <stdio.h>

int main() {
    char str[1000];
    int count=0,i=0;
    scanf("%s",str);
    while(str[i]){
        if(str[i]<='9'&& str[i]>='0')
            count=count*10+str[i]-'0';
        else{
            while(count--)
                printf("%c",str[i]);
            count=0;
        }i++;
    }
}
