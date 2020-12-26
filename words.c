#include<stdio.h>
int main()
{
  char unit[10][10]={{"zero"},{"one"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"}};
  char hundred[][10]={"one","two","three","four","five","six","seven","eight","nine"};
  char tens[][10]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
  char tens1[][10]={"eleven","twelve","thirteen","forteen","fifteen","sixteen","seventeen","eighteen","ninteen"}; 
  int n,r,i,c=0,u=0,h,t;
  scanf("%d",&n);
  while(n)
  {
    if (c==0)
     u=n%10;
    else if (c==1)
     t=n%10;
    else
     h=n%10;
   n/=10;
    c++;
  }
 if(c==3)
 {
   if(u==0)
    printf("%s hundred\n",hundred[(h%10)-1]);
   else
    if(t==1)
     printf("%s hundred and %s\n",hundred[(h%10)-1],tens1[(u%10)-1]);
    else
      printf("%s hundred and %s %s\n",hundred[(h%10)-1],tens[(t%10)-1],unit[(u%10)]);
 }
 else if(c==2)
  if(u==0)
    printf("%s\n",tens[(t%10)-1]);
  else
    if(t==1)
     printf("%s\n",tens1[u-1]);
    else
     printf("%s %s\n",tens[(t%10)-1],unit[u%10]);
 else
 // if (u==0)
   // printf("%s\n",unit[0]);
  //else
   printf("%s\n",unit[u%10]);
  
}
