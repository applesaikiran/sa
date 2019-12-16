#include<stdio.h>
void swap(int* a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
int main()
{
int s,i;
printf("enter size of elements");
scanf("%d",&s);
int a[s];
printf("enter elements");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
ms(a,0,s-1);
for(i=0;i<s;i++)
{
printf("%d",a[i]);
}
}
void mer(int *a,int s,int mid,int e )
{
int i,j,n1=mid-s,n2=e-mid-1;
int l[n1];
int r[n2];
for(i=0;i<n1;i++)
{
l[i]=a[s+i];
}
for(j=0;i<n2;i++)
{
r[j]=a[mid+1+j];
}
i=0;
j=0;
int k=s;
while(i<n1 && j<n2)
{
if(l[i]<=r[j])
{
a[k]=l[i];
i++;
}
else
{
a[k]=r[j];
j++;
}
k++;
}
while(i<n1)
{
a[k]=l[i];
i++;
k++;
}
while(j<n2)
{
a[k]=r[j];
j++;
k++;
}
}
void ms(int *a,int s,int e)
{
if(s>=e)
{
return;
}
else
    {
    int mid=(e+s)/2;
    ms(a,s,mid);
    ms(a,mid+1,s);
    mer(a,s,mid,e);
}
}
