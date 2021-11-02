#include<stdio.h>
void main()
{
   int n,b=0;
   printf("do you want to enter number " );
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      if(a[i]>=b)
      {
            b=a[i];
      }
   }
   printf("%d",b );
   
}