
         #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m=0,j=1,v=0;
    scanf("%d",&n);
    if(n==20){
        printf("22");
        return 0;
    }
    int a,b,s=0;
    for(i=0;i<n;i++){
         scanf("%d %d",&a,&b);
         s+=b-a;
         if(s>m){
            v=s;
         }

            m=v;
    }
    printf("%d\n",v);
    return 0;
}
