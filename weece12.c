#include <stdio.h>
int main(){
    int a ,b;
    while(1){
        scanf("%d %d",&a,&b);
        if(a == 0 && b == 0)
        {
            break;
        }
        else
        {
            for(int i=0 ; i<a ; i++)
            {
                for(int j=0 ; j<b ; j++)
                {
                    if(i==0 || i==(a-1) || j==0 || j==(b-1))
                    {
                        printf("#");
                    }
                    else printf(".");
                }
                printf("\n");
            }
            printf("\n");
        }
    }


}