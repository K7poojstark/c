#include <stdio.h>

int main()
{
    int m,count=0;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<=m;j++)
        {
          if(i==j)
           printf("%3d\n",++count);
          else
           printf("%3d *",++count);
        
        }
    }return 0;
}
