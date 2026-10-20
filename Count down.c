#include<stdio.h>
//Count down timer sample 2
int main()
{
	int hr,min,sec,i,j;
	printf("Enter time hour:minute:second :");
	scanf("%d:%d:%d",&hr,&min,&sec);
	
	while(hr>=0)
	{
		while(min>=0)
		{
			while(sec>=0)
			{
				printf("%d:%d:%d",hr,min,sec);
				for (i=0;i<50000;i++)
				for (j=0;j<50000;j++);
				system("cls");
				sec--;
				if (sec<0){
					break;
				}	
			}sec=59;
			min--;
			if (min<0){
				break;
			}
		}min=59;
		hr--;	
	}	
}

