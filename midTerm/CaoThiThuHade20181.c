#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct Classes
{
	int ClassID;
	char CourseName[30];
	char Room[10];
	char slots[10];
	int Day;
}lop;
void nhapLop(lop*K,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Hay nhap ma lop hoc [%d]:\n",i+1);
		scanf("%d",&K[i].ClassID);
		printf("Hay nhap ten mon hoc [%d]:\n",i+1);
		fflush(stdin);
		gets(K[i].CourseName);
		printf("Hay nhap ten phong [%d]:\n",i+1);
		fflush(stdin);
		gets(K[i].Room);
		printf("Nhap ngay hoc cua lop (2-7) [%d]:\n",i+1);
		scanf("%d",&K[i].Day);
		while(K[i].Day<2||K[i].Day>7)
		{
		printf("Hay nhap lai ngay hoc cua lop (2-7) [%d]:\n",i+1);
		scanf("%d",&K[i].Day);
		}
		printf("Hay nhap tiet hoc cua lop [%d]:\n",i+1);
		fflush(stdin);
		gets(K[i].slots);
		
	}
}

int nhapThemLop(lop *K, int n, int j) {
    int i;
    for (i = n; i < n + j; i++) { // Start from the end of the current array and add j new classes
        printf("Hay nhap ma lop hoc [%d]:\n", i + 1);
        scanf("%d", &K[i].ClassID);
        printf("Hay nhap ten mon hoc [%d]:\n", i + 1);
        fflush(stdin);
        gets(K[i].CourseName);
        printf("Hay nhap ten phong [%d]:\n", i + 1);
        fflush(stdin);
        gets(K[i].Room);
        printf("Nhap ngay hoc cua lop (2-7) [%d]:\n", i + 1);
        scanf("%d", &K[i].Day);
        while (K[i].Day < 2 || K[i].Day > 7) {
            printf("Khong hop le, moi nhap lai ngay hoc (2-7) [%d]:\n", i + 1);
            scanf("%d", &K[i].Day);
        }
        printf("Nhap tiet hoc cua lop [%d]:\n", i + 1);
        fflush(stdin);
        gets(K[i].slots);
        while (K[i].slots[1] != 45) {
            printf("Nhap lai tiet hoc cua lop [%d]:\n", i + 1);
            fflush(stdin);
            gets(K[i].slots);
        }
    }
    return n + j;
}

int inThongTin(lop*K,int n)
{
int i;
printf("%-10s%-30s%-10s%-10s%-10s\n","Ma lop","Ten mon hoc","Ten phong","Thu","Tiet hoc");
   for(i=0;i<n;i++)
   {
      printf("%-10d%-30s%-10s%-10d%-10s\n",K[i].ClassID,K[i].CourseName,K[i].Room,K[i].Day,K[i].slots);
   }
}
int timKiemPhong(lop*K,int n)
{
	int i,dem=0,j=0;
	char search[10];
	printf("Hay nhap ten phong can tim:\n");
	fflush(stdin);
	gets(search);
	for(i=0;i<n;i++)
	{
		if(strcasecmp(K[i].Room,search)==0)
{
			if(j==0)
			{
			printf("%-10s%-30s%-10s%-10s%-10s\n","Ma lop","Ten mon hoc","Ten phong","Thu","Tiet hoc");
			printf("%-10d%-30s%-10s%-10d%-10s",K[i].ClassID,K[i].CourseName,K[i].Room,K[i].Day,K[i].slots);
            printf("\n");
            j++;
            dem--;
            }
            else 
			{
            	printf("%-10d%-30s%-10s%-10d%-10s\n",K[i].ClassID,K[i].CourseName,K[i].Room,K[i].Day,K[i].slots);
            	dem--;
			}
		}
		dem++;
	}
	
	if(dem==n)
	printf("Khong tim thay phong ban yeu cau!\n");
	else printf("Co %d lop",n-dem);
}
void sapXep(lop*K,int n)
{
	lop K3[50],a;
	int i,j;
	for(i=0;i<n;i++)
	{
		K3[i]=K[i];
	}
	for(j=n-1;j>=0;j--)
	{
		for(i=0;i<j;i++)
		{
			if(K3[i].ClassID>K3[i+1].ClassID)
			{
				a=K3[i];
				K3[i]=K3[i+1];
				K3[i+1]=a;
			}
		}
	}
printf("%-10s%-30s%-10s%-10s%-10s\n","Ma lop","Ten mon hoc","Ten phong","Thu","Tiet hoc");
	for(i=0;i<n;i++)
	{
	    printf("%-10d%-30s%-10s%-10d%-10s",K3[i].ClassID,K3[i].CourseName,K3[i].Room,K3[i].Day,K3[i].slots);
        printf("\n");
	}	
}
void ktraTrung(lop*K,int n)
{
	int i,j;
	lop K2[50];
	for (i = 0; i < n; i++)
{
    K2[i].slots[0] = K[i].slots[2];
    K2[i].slots[1] = '\0'; 
}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(strcmp(K[i].Room,K[i+j].Room)==0)
			{
				if(K[i].Day==K[i+j].Day)
				{
					if(atoi(K2[i].slots)-atoi(K[i+j].slots)>0)
					printf("\n%d\n%d\nGiai thich: 2 lop %d va %d bi trung tiet %d-%d ngay thu %d tai phong %-10s ",K[i].ClassID,K[i+j].ClassID,K[i].ClassID,K[i+j].ClassID,atoi(K[i+j].slots),atoi(K2[i].slots),K[i].Day,K[i].Room);
				    if(atoi(K2[i].slots)-atoi(K[i+j].slots)==0)
					printf("\n%d\n%d\nGiai thich: 2 lop %d va %d bi trung tiet %d ngay thu %d tai phong %-10s ",K[i].ClassID,K[i+j].ClassID,K[i].ClassID,K[i+j].ClassID,atoi(K2[i].slots),K[i].Day,K[i].Room);
				
				}
			}
		}
	}
}
int main()
{
	int m,n=0,j=0;
	lop K[50];
	while(m!=6)
{
		printf("\nCHUONG TRINH QUAN LY LOP HOC\n1.Bo sung lop hoc.\n2.In ra thong tin cac lop hoc.\n3.Tim kiem theo phong.\n4.Sap xep.\n5.Kiem tra trung phong.\n6.Thoat\n");
		scanf("%d",&m);
		switch(m)
		{
			case 1: 
			if(n==0)
			{
				printf("Nhap so lop muon in thong tin:\n");
				scanf("%d",&n);
				while(n<1||n>200)
				{
				printf("Vui long nhap lai so luong lop muon in thong tin (1-200):\n");
				scanf("%d",&n);
				}
				nhapLop(K,n);
			}
			else
			{
				printf("Nhap so luong lop muon nhap them:\n");
                scanf("%d", &j);
                while (j <= 0 || n + j > 200) {
                    printf("So luong lop khong hop le hoac vuot qua quy dinh, moi nhap lai:\n");
                    scanf("%d", &j);
                }
                n = nhapThemLop(K, n, j); // Update the total number of classes
                break;
				
			}
			break;
			case 2:
			inThongTin(K,n);
			break;
			case 3:
			timKiemPhong(K,n);
			break;
			case 4:
			sapXep(K,n);
            break;
			case 5:
			ktraTrung(K,n);
			break;
			case 6:
			printf("Ket thuc...");
			break;
			default: printf("Co loi, vui long nhap lai!\n");
	    }
    }
}
