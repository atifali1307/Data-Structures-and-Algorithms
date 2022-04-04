#include<stdio.h>
#include<conio.h>
void main()
{
  void input(int [3][3],int ,int);
  void output(int [3][3],int ,int);
  void mulmatrix(int [3][3],int [3][3],int [3][3],int,int,int);
  void transpose(int [3][3],int,int);
  int a[3][3],b[3][3],c[3][3];
  int ch;
  clrscr();
  printf("1. Multiplication of Two Matrices.\n");
  printf("2. Transpose of Matrix.\n");
  printf("Enter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
	printf("Enter Elements of First Matrix: \n");
	input(a,3,3);
	printf("\nEnter Elements of Second Matrix: \n");
	input(b,3,3);
	mulmatrix(c,a,b,3,3,3);
	printf("\nFirst Matrix:\n");
	output(a,3,3);
	printf("\nSecond Matrix:\n");
	output(b,3,3);
	printf("\nMultiplication of two matrices:\n");
	output(c,3,3);
	break;
    case 2:
	printf("Enter any Matrix:\n");
	input(a,3,3);
	transpose(a,3,3);
	output(a,3,3);
	break;
    default:
	printf("Invalid Choice");
  }
  getch();
}
void input(int a[3][3],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("[%d][%d]",i,j);
      scanf("%d",&a[i][j]);
    }
  }
}
void output(int a[3][3],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}
void mulmatrix(int c[3][3],int a[3][3],int b[3][3],int r,int c1,int c2)
{
  int i,j,k;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c2;j++)
    {
      c[i][j]=0;
      for(k=0;k<c1;k++)
      {
	c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
      }
    }
  }
}
void transpose(int a[3][3],int r,int c)
{
  int i,j,temp;
  for(i=0;i<r;i++)
  {
    for(j=0;j<=i;j++)
    {
      if(i!=j)
      {
	temp=a[i][j];
	a[i][j]=a[j][i];
	a[j][i]=temp;
      }
    }
  }
}
