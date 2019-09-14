//		Bucket Sort
#include<stdio.h>
#include<conio.h>
long ans[10]={0};
int i,n,buc[10]={0},sum;
void print() //	   Display And Compare
{
	long no=0,rem;
	int p,q,temp,c=0;

	for(i=0;i<=9;i++)
	{
		no=ans[i];
		while(no!=0)
		{
			rem=no%100;
			buc[c++]=rem;
			no=no/100;
		}
		for(p=0;p<c;p++)
		{
			for(q=p;q<c;q++)
			{
				if(buc[p]>buc[q])
				{
					temp=buc[p];
					buc[p]=buc[q];
					buc[q]=temp;
				}
			}
		}

		for(p=0;p<c;p++)
			printf(" %d",buc[p]);
		c=0;
	}
	getch();
}
void main()
{
	clrscr();

	printf("\nHow Many Do Want To Enter :");
	scanf("%d",&n);

	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("Enter [%d] :",i);
		scanf("%d",&buc[i]);
	}

	for(i=0;i<10;i++) //	Insert Data Into Bucket
	{
		sum=buc[i]/10;

		if(ans[sum]==0)
			ans[sum]=buc[i];
		else
			ans[sum]=(ans[sum]*100)+buc[i];
	}

	print();

	getch();
}