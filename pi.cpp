#include<stdio.h>
#include<math.h>


int main(){

    int n = 10;
    int x,y,m =0 ,i;
    float AQ;
    for(i=0; i<n; i ++)
    {
        scanf("%d%d",&x,&y);
        if((pow(x,2)+pow(y,2)) <= 1)
        {
            m++;

        }
    }

    AQ = float(m)/n;
    printf("approximate pi is: %f", 4*AQ);


    return 0;
}

