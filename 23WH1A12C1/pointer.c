#include<stdio.h>
void main()
{ 
 int  a[10],*ptr,n,i;
 ptr=a;
 printf("enter n value: ");
 scanf("%d", &n);
 printf("\nenter array elements: ");
 for(i=0;i<n;i++) 
 {
  scanf("%d",ptr++);
 }
 ptr=a;
  for(i=0;i<n;i++)
  { 
   printf("%d",*ptr++);
  }
} 






























































































































































































































































































































































































































































































































