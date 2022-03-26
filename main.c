#include <stdio.h>

int main() 
{
  int a[10][10],b[10][10],c[10][10];
  int m,n,p,q,i,j,k;
  printf("Enter the size of matrix A:");
  scanf("%d %d",&m,&n);
  printf("Enter the size of matrix B:");
  scanf("%d %d",&p,&q);
  if(n!=p)
  {
    printf("Matrix multiplication not possible\n");
    return -1;
  }
  printf("Enter %d elemants of matrix A:",m*n);
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
          }
    }
  printf("Matrix A:\n",m*n);
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          printf("%d ",a[i][j]);
          }
      printf("\n");
    }
  printf("Enter %d elemants of matrix B:",p*q);
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
          scanf("%d",&b[i][j]);
          }
    }
  printf("Matrix B:\n",m*n);
  for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        {
          printf("%d ",b[i][j]);
          }
      printf("\n");
    }
  for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        {
          c[i][j]=0;
          for(k=0;k<n;k++)
            {
              c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
              }
        }
    }
  printf("Product matrix :\n",m*n);
  for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        printf("%d ",c[i][j]);
      printf("\n");
    } 
}