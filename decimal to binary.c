// decimal to binary
#include<stdio.h>
void main(){
int B[100],n,i,j;
printf("Enter n: ");
scanf("%d",&n);
i=0;
while(n>0)
{
B[i]=n%2;
n=n/2;
i++;
}
for (j=i-1;j>=0;j--)
printf("%d",B[j]);
}
