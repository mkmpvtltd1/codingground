#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            k=j-3;
            if(k<=i){
                if(k<=0)
                {
                    int l=-k+2;
                    if(l<=i)
                    printf("%d",l);
                    else{
                        printf(" ");
                    }
                }
                else{
                printf("%d",k);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

