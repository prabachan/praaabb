#include<stdio.h>
 int main()
{
 int i,b[20],j,n=10;
i=0;

 while(n>0)
 {
 b[i]=n%2;
 n=n/2;
 i++;
 }
 for(j=i-1;j>=0;j--)



  printf("%d",b[j]);

return 0;
}




