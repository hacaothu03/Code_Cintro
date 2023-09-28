void ktraTrung(lop*K,int n)
{
	int i,j;
	lop K2[50];
	for(i=0;i<strlen(K[i].slots)-2;i++)
	{
		K2[i].slots[i]=K[i].slots[i+2];
		
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