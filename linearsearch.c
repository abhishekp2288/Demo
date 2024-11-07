#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[50],i,n,elem;
printf("Enter the limit of array");
scanf("%d",&n);
printf("Enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
printf("Enter the item to be found");
scanf("%d",&elem);

for(i=0;i<n;i++)
{
if(a[i]==elem)
printf("\n Item found in %d position",i);
}
return 0;
}
