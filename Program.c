#include<stdio.h>
int main()
{
    int n1,n2,n3;   
    printf("\nEnter the size of first array: ");
    scanf("%d",&n1);
    printf("\nEnter the size of second array: ");
    scanf("%d",&n2);
    n3=n1+n2;
    int a[n1],b[n2],c[n3];
    printf("\nEnter the elements of first array \n");
     for(int i=0;i<n1;i++)  
    {
       scanf("%d",&a[i]);
    }
    
    printf("\nEnter the elements of second array \n");
     for(int j=0;j<n2;j++)  
    {
       scanf("%d",&b[j]);
    }
    
int swap,position;    
    for(int i = 0; i < n1 - 1; i++)
{
position=i;
for(int j = i + 1; j < n1; j++)
{
if(a[position] > a[j])
position=j;
}
if(position != i)
{
swap=a[i];
a[i]=a[position];
a[position]=swap;
}
}

for(int i = 0; i < n2 - 1; i++)
{
position=i;
for(int j = i + 1; j < n2; j++)
{
if(b[position] > b[j])
position=j;
}
if(position != i)
{
swap=b[i];
b[i]=b[position];
b[position]=swap;
}
}
printf("\n Sorted first array : \n");
     for(int i=0;i<n1;i++)  
    {
       printf("%d  ",a[i]);
    }
    printf("\n Sorted second array : \n");
     for(int i=0;i<n2;i++)  
    {
       printf("%d  ",b[i]);
    }
int k=0;
for(int i=0;i<n1;i++)
{
c[k++]=a[i];
}
for(int i=0;i<n2;i++)
{
c[k++]=b[i];
}

for(int i = 0; i < n3 - 1; i++)
{
position=i;
for(int j = i + 1; j < n3; j++)
{
if(c[position] > c[j])
position=j;
}
if(position != i)
{
swap=c[i];
c[i]=c[position];
c[position]=swap;
}
}
printf("\n Sorted merged array : \n");
     for(int i=0;i<n3;i++)  
    {
       printf("%d  ",c[i]);
    }
}