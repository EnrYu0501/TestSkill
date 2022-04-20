#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

void nhap(int a[][50], int &n,int &m)
{
 printf("nhap so dong:");
 scanf("%d",&n);
 printf("nhap so cot:");
 scanf("%d",&m);
 
}

void sinhMaTran(int a[][50], int n, int m)
{
	srand(time(0));// time trong thu vien time.h
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
			{
				a[i][j]=rand()%10;// ham rand trong thu vien stdlib.h
				
			}
}

void xuatMaTran(int a[][50], int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			printf("\t%d", a[i][j]);
		printf("\n");
	}
}

void tongCacDuong(int a[][50], int n, int m){
	int maxM=0,
		maxN=0,
		MAX=0;
		
	for(int i=0;i<m;i++)   
  	{
   		int s3=0;
     	for(int j=0;j<n;j++)
      	{
      		s3=s3+a[j][i];
      		if(s3>maxM)
			{
      			maxM=s3;
	  		}
      	}
		printf("\n Cot thu %d co tong la: %d",i,s3);  
	}
	printf("\n cot lon nhat la: %d",maxM);
   
	for(int i=0;i<n;i++)   
  	{
   		int s4=0;
     	for(int j=0;j<m;j++)
      	{
      		s4=s4+a[i][j];
      		if(s4>maxN)
      		{
      			maxN=s4;	
			}
      	}
     	printf("\n Dong thu %d co tong la: %d",i,s4); 
   }
   printf("\n Dong lon nhat la: %d",maxN);
   
   	int s1=0,s2=0;
	for (int i = 0; i < n; i++) 
	{
      for (int j = 0; j < m; j++) 
	  {
         if (i == j)
		 	s1 = s1 + a[i][j];       
      }
	} 
   	printf("\n Duong cheo chinh co tong la: %d",s1);
   
   	for (int i = 0; i < n; i++) 
	{
      for (int j = 0; j < m; j++) 
	  {
         if (i+j == n-1)
            s2 = s2 + a[i][j];    
      }
   	}	 
   	printf("\n Duong cheo phu co tong la: %d",s2);
   
   if(s1>MAX)
   {
   	MAX=s1;
   }
   if(s2>MAX)
   {
   	MAX=s2;
   }
   if(maxM>MAX)
   {
   	MAX=maxM;
   }
   if(maxN>MAX)
   {
   	MAX=maxN;
   }
   	printf("\n Dong co gia tri lon nhat la: %d",MAX);
   	     
}



int main()
{
 int a[50][50],n,m;
 nhap(a,n,m);
 sinhMaTran(a,n,m);
 printf("\nMa tran vua sinh ngau nhien:\n");
 xuatMaTran(a,n,m);
 tongCacDuong(a,n,m);
 
 return 0;
};
