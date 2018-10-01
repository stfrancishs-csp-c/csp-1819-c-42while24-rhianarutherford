#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;

    k=10;
    while(k<5)
    //for (k=0;k<5;k++)
    {
        sum+=k;
        k++;
    }

    printf ("%d\n",sum);

    // k=0;

    for(k=10;k>=0;k--) {
    //while (k>0){
        //k=k-1;
        printf ("%d\n", k);

    }
    printf ("BLAST OFF!");

}
