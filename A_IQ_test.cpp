#include<stdio.h>
int main()
{
    int n,i,p,e=0,k,o=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            e++;
        }
        else{
            o++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(e>o)
        {
            if(a[i]%2!=0)
            {
                k=i;
            }
        }
        else{
            if(a[i]%2==0)
               {
                   k=i;
               }
        }
    }
    printf("%d\n",k);

}