#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct 
{
		char 	country[100];
		char 	state[100];
		char 	touristplace[100];
		float	temp;
		int	touristspots;
}Tourist;
Tourist* 	input(Tourist a[],int ntp)
{
		for(int i=0;i<ntp;i++)
		{	
			getchar();
			printf(" Enter Country : ");
			scanf("%[^\n]",a[i].country);
			printf(" Enter State : ");getchar();
			scanf("%[^\n]",a[i].state);
			printf(" Enter Tourist Place : ");getchar();
			scanf("%[^\n]",a[i].touristplace);
			printf(" Enter Average Temperature Of The Tourist Place In Celsius : ");
			scanf("%f",&a[i].temp);
			printf(" Enter Number Of Tourist Spots : ");
			scanf("%d",&a[i].touristspots);
			printf("\n");
		}
		printf("\n\n");
		return a;
}
int 	display(Tourist a[],int ntp)
{	
		if(ntp<=0)
		{
			printf("\n\n Display Not Possible \n\n");
			return -1;
		}
		else
		{
			for(int i=0;i<ntp;i++)
			{
				printf(" Country %s \t",a[i].country);
				printf(" State %s \t",a[i].state);
				printf(" Tourist Place %s \t",a[i].touristplace);
				printf(" Average Temperature In Celsius %.2f \t",a[i].temp);
				printf(" No Of Tourist Spots %d \t",a[i].touristspots);
				printf("\n\n");
			}
			printf("\n\n");
			return 1;
		}
}
Tourist* 	sort(Tourist a[],int ntp)
{
		for(int i=0;i<ntp-1;i++)
		{
			for(int j=0;j<ntp-i-1;j++)
			{
				if(a[j].touristspots<a[j+1].touristspots)
				{
					Tourist t;
						t=a[j];
						a[j]=a[j+1];
						a[j+1]=t;
				}
			}
		}
		printf("\n\n Sorted Based On Number Of Tourist Spots In Descending Order \n\n");
		return a;
}
Tourist*	select1(Tourist a[],Tourist b[],float tempconstraint,int ntp)
{
	int 	count=0;
		for(int i=0;i<ntp;i++)
		{
			if(a[i].temp>tempconstraint)
			{
				strcpy(b[count].country,a[i].country);
				strcpy(b[count].state,a[i].state);
				strcpy(b[count].touristplace,a[i].touristplace);
				b[count].temp=a[i].temp;
				b[count].touristspots=a[i].touristspots;
				count++;
			}
		}
		printf(" The Cities Have Been Selected \n ");
		count=display(b,count);
		return b;
}
int 		main()
{
	Tourist 	a[50],b[50],*p,*q,*r;
	float 		tempconstraint=0;
	int 		ntp,flag;
			ntp=flag=0;
			printf("\n\n User Defined Structure Operations  \n\n\n");
			printf(" Enter Total Number Of Tourist Places : ");
			scanf("%d",&ntp);
			printf("\n\n Inputing The Values \n\n");
			p=input(a,ntp);
			printf(" Displaying The Values \n\n");
			flag=display(a,ntp);
			printf(" Sorting Based On Number Of Tourist Spots \n\n");
			q=sort(p,ntp);
			flag=display(q,ntp);
			printf(" Selecting Cities With Temperature Greater Than Particular Temperature \n\n");
			printf(" Enter Temperature Constraint In Celsius : ");
			scanf("%f",&tempconstraint);
			r=select1(a,b,tempconstraint,ntp);
			printf("\n\n The End \n\n");
			return 0;
}
