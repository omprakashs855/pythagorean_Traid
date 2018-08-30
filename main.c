#include <stdio.h>
#include <stdlib.h>

void isTriplet(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int x=ar[i]*ar[i];
                int y=ar[j]*ar[j];
                int z=ar[k]*ar[k];
                if(x==y+z || y==x+z || z==x+y){
                    printf("%d,%d,%d\n",ar[i],ar[j],ar[k]);
                    break;

            }
        }
    }
}
}
int main()
{
    int i,n,a[100];
    printf("Enter the n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        a[i]=i+1;
    isTriplet(a,n);
    return 0;
}
