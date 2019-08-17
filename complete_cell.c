#include <stdio.h>
int main() {

    int days,ind,arr[8],outer;
    for(ind=0;ind<8;scanf("%d ",&arr[ind]),ind++);   
    scanf("%d",&days);
    int dupArr[8];
    for(outer=0;outer<days;outer++){ 
        for(ind=0;ind<8;ind++){    
        
            if(ind==0){
                if(arr[ind+1]==0)
                    dupArr[ind]=0;
                else
                    dupArr[ind]=1;
            }
            else if(ind==7){
                if(arr[ind-1]==0)
                    dupArr[ind]=0;
                else
                    dupArr[ind]=1;
            }
            else{
                if((arr[ind-1]==0&&arr[ind+1]==0) || (arr[ind-1]==1&&arr[ind+1]==1)){
                    dupArr[ind]=0;
                }
                else 
                    dupArr[ind]=1;
            }
        }
        for(ind=0;ind<8;ind++){
            arr[ind]=dupArr[ind]; 
    }
    for(ind=0;ind<8;ind++)
        printf("%d ",arr[ind]);
    
    return 0;
}}
